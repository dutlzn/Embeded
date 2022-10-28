################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
bsp/%.obj: ../bsp/%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"E:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.3.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="E:/job/MCU/1-GPIO_LED" --include_path="/packages/ti/xdais" --include_path="E:/job/MCU/1-GPIO_LED/bsp" --include_path="E:/job/MCU/1-GPIO_LED/libs" --include_path="E:/job/MCU/1-GPIO_LED/include" --advice:performance=all -g --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="bsp/$(basename $(<F)).d_raw" --obj_directory="bsp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


