################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := E:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.3.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./bsp/bsp_led.obj" \
"./libs/DSP2833x_ADC_cal.obj" \
"./libs/DSP2833x_Adc.obj" \
"./libs/DSP2833x_CSMPasswords.obj" \
"./libs/DSP2833x_CodeStartBranch.obj" \
"./libs/DSP2833x_CpuTimers.obj" \
"./libs/DSP2833x_DBGIER.obj" \
"./libs/DSP2833x_DMA.obj" \
"./libs/DSP2833x_DefaultIsr.obj" \
"./libs/DSP2833x_DisInt.obj" \
"./libs/DSP2833x_ECan.obj" \
"./libs/DSP2833x_ECap.obj" \
"./libs/DSP2833x_EPwm.obj" \
"./libs/DSP2833x_EQep.obj" \
"./libs/DSP2833x_GlobalVariableDefs.obj" \
"./libs/DSP2833x_Gpio.obj" \
"./libs/DSP2833x_I2C.obj" \
"./libs/DSP2833x_Mcbsp.obj" \
"./libs/DSP2833x_MemCopy.obj" \
"./libs/DSP2833x_PieCtrl.obj" \
"./libs/DSP2833x_PieVect.obj" \
"./libs/DSP2833x_Sci.obj" \
"./libs/DSP2833x_Spi.obj" \
"./libs/DSP2833x_SysCtrl.obj" \
"./libs/DSP2833x_Xintf.obj" \
"./libs/DSP2833x_usDelay.obj" \
"../DSP2833x_Headers_nonBIOS.cmd" \
"../F28335.cmd" \
$(GEN_CMDS__FLAG) \
-lrts2800_fpu32.lib \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include bsp/subdir_vars.mk
-include libs/subdir_vars.mk
-include subdir_rules.mk
-include bsp/subdir_rules.mk
-include libs/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
1-GPIO_LED.out \

EXE_OUTPUTS__QUOTED += \
"1-GPIO_LED.out" \

BIN_OUTPUTS += \
1-GPIO_LED.hex \

BIN_OUTPUTS__QUOTED += \
"1-GPIO_LED.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "1-GPIO_LED.out"

# Tool invocations
1-GPIO_LED.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"E:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.3.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --advice:performance=all -g --diag_wrap=off --diag_warning=225 --display_error_number -z -m"1-GPIO_LED.map" --stack_size=0x300 --warn_sections -i"E:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.3.LTS/lib" -i"E:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.3.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="1-GPIO_LED_linkInfo.xml" --rom_model -o "1-GPIO_LED.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

1-GPIO_LED.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"E:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.3.LTS/bin/hex2000"  -o "1-GPIO_LED.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "bsp\bsp_led.obj" "libs\DSP2833x_ADC_cal.obj" "libs\DSP2833x_Adc.obj" "libs\DSP2833x_CSMPasswords.obj" "libs\DSP2833x_CodeStartBranch.obj" "libs\DSP2833x_CpuTimers.obj" "libs\DSP2833x_DBGIER.obj" "libs\DSP2833x_DMA.obj" "libs\DSP2833x_DefaultIsr.obj" "libs\DSP2833x_DisInt.obj" "libs\DSP2833x_ECan.obj" "libs\DSP2833x_ECap.obj" "libs\DSP2833x_EPwm.obj" "libs\DSP2833x_EQep.obj" "libs\DSP2833x_GlobalVariableDefs.obj" "libs\DSP2833x_Gpio.obj" "libs\DSP2833x_I2C.obj" "libs\DSP2833x_Mcbsp.obj" "libs\DSP2833x_MemCopy.obj" "libs\DSP2833x_PieCtrl.obj" "libs\DSP2833x_PieVect.obj" "libs\DSP2833x_Sci.obj" "libs\DSP2833x_Spi.obj" "libs\DSP2833x_SysCtrl.obj" "libs\DSP2833x_Xintf.obj" "libs\DSP2833x_usDelay.obj" 
	-$(RM) "main.d" "bsp\bsp_led.d" "libs\DSP2833x_Adc.d" "libs\DSP2833x_CpuTimers.d" "libs\DSP2833x_DMA.d" "libs\DSP2833x_DefaultIsr.d" "libs\DSP2833x_ECan.d" "libs\DSP2833x_ECap.d" "libs\DSP2833x_EPwm.d" "libs\DSP2833x_EQep.d" "libs\DSP2833x_GlobalVariableDefs.d" "libs\DSP2833x_Gpio.d" "libs\DSP2833x_I2C.d" "libs\DSP2833x_Mcbsp.d" "libs\DSP2833x_MemCopy.d" "libs\DSP2833x_PieCtrl.d" "libs\DSP2833x_PieVect.d" "libs\DSP2833x_Sci.d" "libs\DSP2833x_Spi.d" "libs\DSP2833x_SysCtrl.d" "libs\DSP2833x_Xintf.d" 
	-$(RM) "libs\DSP2833x_ADC_cal.d" "libs\DSP2833x_CSMPasswords.d" "libs\DSP2833x_CodeStartBranch.d" "libs\DSP2833x_DBGIER.d" "libs\DSP2833x_DisInt.d" "libs\DSP2833x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

