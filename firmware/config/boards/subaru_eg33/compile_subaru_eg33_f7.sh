#!/bin/bash

#Build with no debug features
#export EXTRA_PARAMS="-DDUMMY -DEFI_ENABLE_ASSERTS=FALSE -DCH_DBG_ENABLE_ASSERTS=FALSE -DCH_DBG_ENABLE_STACK_CHECK=FALSE -DCH_DBG_FILL_THREADS=FALSE -DCH_DBG_THREADS_PROFILING=FALSE"

#export VAR_DEF_ENGINE_TYPE="-DDEFAULT_ENGINE_TYPE=SUBARUEG33_DEFAULTS"

#export DEBUG_LEVEL_OPT="-O0 -ggdb -g"

export USE_OPENBLT=yes

bash ../common_make.sh ARCH_STM32F7
