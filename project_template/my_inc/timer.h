/*
 * timer.h
 *
 *  Created on: 2022Äê11ÔÂ2ÈÕ
 *      Author: lzn
 */

#ifndef MY_INC_TIMER_H_
#define MY_INC_TIMER_H_
#include "DSP28x_Project.h"

#define LED0 GpioDataRegs.GPADAT.bit.GPIO0
#define LED1 GpioDataRegs.GPADAT.bit.GPIO1
#define LED2 GpioDataRegs.GPADAT.bit.GPIO2


interrupt void cpu_timer0_isr(void);
interrupt void cpu_timer1_isr(void);
interrupt void cpu_timer2_isr(void);


//void delay_1ms(int ms);
void led_init(void);
void time_config(void);
void CPU_Timer_Config(void);



#endif /* MY_INC_TIMER_H_ */
