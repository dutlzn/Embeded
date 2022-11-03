/*
 * exint.h
 *
 *  Created on: 2022Äê11ÔÂ3ÈÕ
 *      Author: lzn
 */

#ifndef MY_INC_EXINT_H_
#define MY_INC_EXINT_H_
#include "DSP28x_Project.h"

#define LED0 GpioDataRegs.GPADAT.bit.GPIO0
#define LED1 GpioDataRegs.GPADAT.bit.GPIO1
#define LED2 GpioDataRegs.GPADAT.bit.GPIO2
#define LED3 GpioDataRegs.GPADAT.bit.GPIO3
#define LED4 GpioDataRegs.GPADAT.bit.GPIO4

void delay_1ms(Uint16 ms);
void led_init(void);
void ex_int_init(void);



#endif /* MY_INC_EXINT_H_ */
