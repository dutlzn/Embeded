#include "led.h"


void led_configuration(void) {
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0; // ͨ��I/0
    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1; // �����
    GpioDataRegs.GPACLEAR.bit.GPIO0 = 1; // ����

    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0; // ͨ��I/0
    GpioCtrlRegs.GPADIR.bit.GPIO1 = 1; // �����
    GpioDataRegs.GPACLEAR.bit.GPIO1 = 1; // ����

    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0; // ͨ��I/0
    GpioCtrlRegs.GPADIR.bit.GPIO2 = 1; // �����
    GpioDataRegs.GPACLEAR.bit.GPIO2 = 1; // ����

    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0; // ͨ��I/0
    GpioCtrlRegs.GPADIR.bit.GPIO3 = 1; // �����
    GpioDataRegs.GPACLEAR.bit.GPIO3 = 1; // ����

    GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 0; // ͨ��I/0
    GpioCtrlRegs.GPADIR.bit.GPIO4 = 1; // �����
    GpioDataRegs.GPACLEAR.bit.GPIO4 = 1; // ����

    EDIS;
}



