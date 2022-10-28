################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
source/%.obj: ../source/%.asm $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/study/CCS/toolchain/6.2.9/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/study/CCS/GPIO/PWM" --include_path="D:/study/CCS/GPIO/PWM/include" --include_path="D:/study/CCS/GPIO/PWM/source" --include_path="D:/study/CCS/toolchain/6.2.9/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/$(basename $(<F)).d_raw" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

source/%.obj: ../source/%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/study/CCS/toolchain/6.2.9/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/study/CCS/GPIO/PWM" --include_path="D:/study/CCS/GPIO/PWM/include" --include_path="D:/study/CCS/GPIO/PWM/source" --include_path="D:/study/CCS/toolchain/6.2.9/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/$(basename $(<F)).d_raw" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


