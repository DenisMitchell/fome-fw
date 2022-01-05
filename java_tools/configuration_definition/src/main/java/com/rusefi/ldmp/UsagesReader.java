package com.rusefi.ldmp;

import com.rusefi.ConfigDefinition;
import com.rusefi.util.SystemOut;
import org.yaml.snakeyaml.Yaml;

import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.List;
import java.util.Map;

public class UsagesReader {
    public static void main(String[] args) throws IOException {
        if (args.length != 1) {
            System.err.println("One parameter expected: name of live data yaml input file");
            System.exit(-1);
        }
        String yamlFileName = args[0];
        Yaml yaml = new Yaml();
        Map<String, Object> data = yaml.load(new FileReader(yamlFileName));

        Map<?, ?> liveDocs = (Map) data.get("Usages");
        for (Map.Entry entry : liveDocs.entrySet()) {
            String name = (String) entry.getKey();
            System.out.println(" " + name);
            System.out.println("  " + entry.getValue());
            List elements = (List) entry.getValue();

            String javaName = (String) elements.get(0);
            String folder = (String) elements.get(1);


            ConfigDefinition.main(new String[]{
                    ConfigDefinition.KEY_DEFINITION,
                    folder + File.separator + name + ".txt",

                    ConfigDefinition.KEY_JAVA_DESTINATION,
                    "../java_console/models/src/main/java/com/rusefi/config/generated/" + javaName,

                    ConfigDefinition.KEY_C_DESTINATION,
                    folder + File.separator + name + "_generated.h"
            });
        }
    }
}
