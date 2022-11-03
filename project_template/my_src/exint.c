/*
 * exint.c
 *
 *  Created on: 2022Äê11ÔÂ3ÈÕ
 *      Author: lzn
 */

#include "exint.h"

void delay_1ms(Uint16 ms) {
    while(ms--) { DELAY_US(1000); }
}

void led_init(void)
{
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0; //??IO??
    GpioCtrlRegs.GPAPUD.bit.GPIO0 = 0;  //??????
    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;  //?????

    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0; //??IO??
    GpioCtrlRegs.GPAPUD.bit.GPIO1 = 0;  //??????
    GpioCtrlRegs.GPADIR.bit.GPIO1 = 1;  //?????

    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0; //??IO??
    GpioCtrlRegs.GPAPUD.bit.GPIO2 = 0;  //??????
    GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;  //?????

    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0; //??IO??
    GpioCtrlRegs.GPAPUD.bit.GPIO3 = 0;  //??????
    GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;  //?????

    GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 0; //??IO??
    GpioCtrlRegs.GPAPUD.bit.GPIO4 = 0;  //??????
    GpioCtrlRegs.GPADIR.bit.GPIO4 = 1;  //?????

    GpioCtrlRegs.GPCMUX1.bit.GPIO67 = 0;  //??IO??
    GpioCtrlRegs.GPCPUD.bit.GPIO67 = 0;   //??????
    GpioCtrlRegs.GPCDIR.bit.GPIO67 = 1;   //?????
    GpioDataRegs.GPCCLEAR.bit.GPIO67 = 1; //???????

    GpioDataRegs.GPASET.bit.GPIO0 = 1;
    GpioDataRegs.GPASET.bit.GPIO1 = 1;
    GpioDataRegs.GPASET.bit.GPIO2 = 1;
    GpioDataRegs.GPASET.bit.GPIO3 = 1;
    GpioDataRegs.GPASET.bit.GPIO4 = 1;
    EDIS;
}

void ex_int_init(void) {
     EALLOW;
     GpioCtrlRegs.GPAMUX1.bit.GPIO13 = 0;      //??IO??
     GpioCtrlRegs.GPADIR.bit.GPIO13 = 0;       //?????
     GpioIntRegs.GPIOXINT1SEL.bit.GPIOSEL = 13;//??GPIO13?????XINT????
     XIntruptRegs.XINT1CR.bit.POLARITY= 0;     //???????
     XIntruptRegs.XINT1CR.bit.ENABLE = 1;      //??XINT??
     EDIS;
}




