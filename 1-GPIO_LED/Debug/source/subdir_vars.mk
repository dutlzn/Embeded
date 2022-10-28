################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../source/DSP2833x_ADC_cal.asm \
../source/DSP2833x_CSMPasswords.asm \
../source/DSP2833x_CodeStartBranch.asm \
../source/DSP2833x_DBGIER.asm \
../source/DSP2833x_DisInt.asm \
../source/DSP2833x_usDelay.asm 

C_SRCS += \
../source/DSP2833x_Adc.c \
../source/DSP2833x_CpuTimers.c \
../source/DSP2833x_DMA.c \
../source/DSP2833x_DefaultIsr.c \
../source/DSP2833x_ECan.c \
../source/DSP2833x_ECap.c \
../source/DSP2833x_EPwm.c \
../source/DSP2833x_EQep.c \
../source/DSP2833x_Gpio.c \
../source/DSP2833x_I2C.c \
../source/DSP2833x_Mcbsp.c \
../source/DSP2833x_MemCopy.c \
../source/DSP2833x_PieCtrl.c \
../source/DSP2833x_PieVect.c \
../source/DSP2833x_SWPrioritizedDefaultIsr.c \
../source/DSP2833x_SWPrioritizedPieVect.c \
../source/DSP2833x_Sci.c \
../source/DSP2833x_Spi.c \
../source/DSP2833x_SysCtrl.c \
../source/DSP2833x_Xintf.c 

C_DEPS += \
./source/DSP2833x_Adc.d \
./source/DSP2833x_CpuTimers.d \
./source/DSP2833x_DMA.d \
./source/DSP2833x_DefaultIsr.d \
./source/DSP2833x_ECan.d \
./source/DSP2833x_ECap.d \
./source/DSP2833x_EPwm.d \
./source/DSP2833x_EQep.d \
./source/DSP2833x_Gpio.d \
./source/DSP2833x_I2C.d \
./source/DSP2833x_Mcbsp.d \
./source/DSP2833x_MemCopy.d \
./source/DSP2833x_PieCtrl.d \
./source/DSP2833x_PieVect.d \
./source/DSP2833x_SWPrioritizedDefaultIsr.d \
./source/DSP2833x_SWPrioritizedPieVect.d \
./source/DSP2833x_Sci.d \
./source/DSP2833x_Spi.d \
./source/DSP2833x_SysCtrl.d \
./source/DSP2833x_Xintf.d 

OBJS += \
./source/DSP2833x_ADC_cal.obj \
./source/DSP2833x_Adc.obj \
./source/DSP2833x_CSMPasswords.obj \
./source/DSP2833x_CodeStartBranch.obj \
./source/DSP2833x_CpuTimers.obj \
./source/DSP2833x_DBGIER.obj \
./source/DSP2833x_DMA.obj \
./source/DSP2833x_DefaultIsr.obj \
./source/DSP2833x_DisInt.obj \
./source/DSP2833x_ECan.obj \
./source/DSP2833x_ECap.obj \
./source/DSP2833x_EPwm.obj \
./source/DSP2833x_EQep.obj \
./source/DSP2833x_Gpio.obj \
./source/DSP2833x_I2C.obj \
./source/DSP2833x_Mcbsp.obj \
./source/DSP2833x_MemCopy.obj \
./source/DSP2833x_PieCtrl.obj \
./source/DSP2833x_PieVect.obj \
./source/DSP2833x_SWPrioritizedDefaultIsr.obj \
./source/DSP2833x_SWPrioritizedPieVect.obj \
./source/DSP2833x_Sci.obj \
./source/DSP2833x_Spi.obj \
./source/DSP2833x_SysCtrl.obj \
./source/DSP2833x_Xintf.obj \
./source/DSP2833x_usDelay.obj 

ASM_DEPS += \
./source/DSP2833x_ADC_cal.d \
./source/DSP2833x_CSMPasswords.d \
./source/DSP2833x_CodeStartBranch.d \
./source/DSP2833x_DBGIER.d \
./source/DSP2833x_DisInt.d \
./source/DSP2833x_usDelay.d 

OBJS__QUOTED += \
"source\DSP2833x_ADC_cal.obj" \
"source\DSP2833x_Adc.obj" \
"source\DSP2833x_CSMPasswords.obj" \
"source\DSP2833x_CodeStartBranch.obj" \
"source\DSP2833x_CpuTimers.obj" \
"source\DSP2833x_DBGIER.obj" \
"source\DSP2833x_DMA.obj" \
"source\DSP2833x_DefaultIsr.obj" \
"source\DSP2833x_DisInt.obj" \
"source\DSP2833x_ECan.obj" \
"source\DSP2833x_ECap.obj" \
"source\DSP2833x_EPwm.obj" \
"source\DSP2833x_EQep.obj" \
"source\DSP2833x_Gpio.obj" \
"source\DSP2833x_I2C.obj" \
"source\DSP2833x_Mcbsp.obj" \
"source\DSP2833x_MemCopy.obj" \
"source\DSP2833x_PieCtrl.obj" \
"source\DSP2833x_PieVect.obj" \
"source\DSP2833x_SWPrioritizedDefaultIsr.obj" \
"source\DSP2833x_SWPrioritizedPieVect.obj" \
"source\DSP2833x_Sci.obj" \
"source\DSP2833x_Spi.obj" \
"source\DSP2833x_SysCtrl.obj" \
"source\DSP2833x_Xintf.obj" \
"source\DSP2833x_usDelay.obj" 

C_DEPS__QUOTED += \
"source\DSP2833x_Adc.d" \
"source\DSP2833x_CpuTimers.d" \
"source\DSP2833x_DMA.d" \
"source\DSP2833x_DefaultIsr.d" \
"source\DSP2833x_ECan.d" \
"source\DSP2833x_ECap.d" \
"source\DSP2833x_EPwm.d" \
"source\DSP2833x_EQep.d" \
"source\DSP2833x_Gpio.d" \
"source\DSP2833x_I2C.d" \
"source\DSP2833x_Mcbsp.d" \
"source\DSP2833x_MemCopy.d" \
"source\DSP2833x_PieCtrl.d" \
"source\DSP2833x_PieVect.d" \
"source\DSP2833x_SWPrioritizedDefaultIsr.d" \
"source\DSP2833x_SWPrioritizedPieVect.d" \
"source\DSP2833x_Sci.d" \
"source\DSP2833x_Spi.d" \
"source\DSP2833x_SysCtrl.d" \
"source\DSP2833x_Xintf.d" 

ASM_DEPS__QUOTED += \
"source\DSP2833x_ADC_cal.d" \
"source\DSP2833x_CSMPasswords.d" \
"source\DSP2833x_CodeStartBranch.d" \
"source\DSP2833x_DBGIER.d" \
"source\DSP2833x_DisInt.d" \
"source\DSP2833x_usDelay.d" 

ASM_SRCS__QUOTED += \
"../source/DSP2833x_ADC_cal.asm" \
"../source/DSP2833x_CSMPasswords.asm" \
"../source/DSP2833x_CodeStartBranch.asm" \
"../source/DSP2833x_DBGIER.asm" \
"../source/DSP2833x_DisInt.asm" \
"../source/DSP2833x_usDelay.asm" 

C_SRCS__QUOTED += \
"../source/DSP2833x_Adc.c" \
"../source/DSP2833x_CpuTimers.c" \
"../source/DSP2833x_DMA.c" \
"../source/DSP2833x_DefaultIsr.c" \
"../source/DSP2833x_ECan.c" \
"../source/DSP2833x_ECap.c" \
"../source/DSP2833x_EPwm.c" \
"../source/DSP2833x_EQep.c" \
"../source/DSP2833x_Gpio.c" \
"../source/DSP2833x_I2C.c" \
"../source/DSP2833x_Mcbsp.c" \
"../source/DSP2833x_MemCopy.c" \
"../source/DSP2833x_PieCtrl.c" \
"../source/DSP2833x_PieVect.c" \
"../source/DSP2833x_SWPrioritizedDefaultIsr.c" \
"../source/DSP2833x_SWPrioritizedPieVect.c" \
"../source/DSP2833x_Sci.c" \
"../source/DSP2833x_Spi.c" \
"../source/DSP2833x_SysCtrl.c" \
"../source/DSP2833x_Xintf.c" 


