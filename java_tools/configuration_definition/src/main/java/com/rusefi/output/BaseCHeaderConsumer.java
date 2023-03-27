package com.rusefi.output;

import com.rusefi.*;

import static com.rusefi.ToolUtil.EOL;

public class BaseCHeaderConsumer implements ConfigurationConsumer {
    private static final String BOOLEAN_TYPE = "bool";
    private final StringBuilder content = new StringBuilder();

    private static String getHeaderText(FieldIteratorWithOffset iterator) {
        ConfigField configField = iterator.cf;
        if (configField.isBit()) {
            // unused bits are needed for proper struct memsize
            String comment = packComment(configField.getComment(), "\t// ") + "\t// offset " + iterator.currentOffset + " bit " + iterator.bitState.get() + EOL;
            return comment + "\t" + BOOLEAN_TYPE + " " + configField.getName() + " : 1 {};" + EOL + EOL;
        }

        String cEntry = getComment(configField.getComment(), iterator.currentOffset, configField.getUnits());

        String typeName = configField.getType();

        String autoscaleSpec = configField.autoscaleSpec();
        if (autoscaleSpec != null) {
            typeName = "scaled_channel<" + typeName + ", " + autoscaleSpec + ">";
        }

        if (!configField.isArray()) {
            // not an array
            cEntry += "\t" + typeName + " " + configField.getName();
            if (ConfigDefinition.needZeroInit && TypesHelper.isPrimitive(configField.getType())) {
                // we need this cast in case of enums
                cEntry += " = (" + configField.getType() + ")0";
            }
            cEntry += ";" + EOL + EOL;
        } else {
            cEntry += "\t" + typeName + " " + configField.getName() + "[" + configField.getArraySizeVariableName() + "];" + EOL + EOL;
        }
        return cEntry;
    }

    private static String getComment(String comment, int currentOffset, String units) {
        String packedComment = packComment(comment, "\t// ");
        String unitsComment = units.isEmpty() ? "" : "\t// " + units + EOL;
        return packedComment +
               unitsComment +
               "\t// offset " + currentOffset + EOL;
    }

    public static String packComment(String comment, String linePrefix) {
        if (comment == null)
            return "";
        if (comment.trim().isEmpty())
            return "";
        String result = "";
        for (String line : comment.split("\\\\n")) {
            result += linePrefix + line + EOL;
        }
        return result;
    }

    @Override
    public void handleEndStruct(ReaderState readerState, ConfigStructure structure) {
        if (structure.getComment() != null) {
            content.append(packComment(structure.getComment(), "// ") + EOL);
        }

        content.append("struct " + structure.getName() + " {" + EOL);

        FieldIteratorWithOffset iterator = new FieldIteratorWithOffset(structure.getcFields());
        for (int i = 0; i < structure.getcFields().size(); i++) {
            iterator.start(i);
            content.append(getHeaderText(iterator));

            iterator.currentOffset += iterator.cf.getSize(iterator.next);
            iterator.end();
        }

        content.append("};" + EOL);
        content.append("static_assert(sizeof(" + structure.getName() + ") == " + iterator.currentOffset + ");\n");
        content.append(EOL);
    }

    public String getContent() {
        return content.toString();
    }
}
