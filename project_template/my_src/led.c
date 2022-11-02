#include "led.h"


void led_configuration(void) {
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0; // 通用I/0
    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1; // 输出口
    GpioDataRegs.GPACLEAR.bit.GPIO0 = 1; // 清零

    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0; // 通用I/0
    GpioCtrlRegs.GPADIR.bit.GPIO1 = 1; // 输出口
    GpioDataRegs.GPACLEAR.bit.GPIO1 = 1; // 清零

    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0; // 通用I/0
    GpioCtrlRegs.GPADIR.bit.GPIO2 = 1; // 输出口
    GpioDataRegs.GPACLEAR.bit.GPIO2 = 1; // 清零

    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0; // 通用I/0
    GpioCtrlRegs.GPADIR.bit.GPIO3 = 1; // 输出口
    GpioDataRegs.GPACLEAR.bit.GPIO3 = 1; // 清零

    GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 0; // 通用I/0
    GpioCtrlRegs.GPADIR.bit.GPIO4 = 1; // 输出口
    GpioDataRegs.GPACLEAR.bit.GPIO4 = 1; // 清零

    EDIS;
}



