#include "key.h"
void delay_1ms(int ms) {
    while (--ms) { DELAY_US(1000); }

}
void key_configuration(void) {
    EALLOW;

    GpioCtrlRegs.GPCMUX1.bit.GPIO64 = 0;
    GpioCtrlRegs.GPCDIR.bit.GPIO64 = 0; // IN

    GpioCtrlRegs.GPCMUX1.bit.GPIO65 = 0;
    GpioCtrlRegs.GPCDIR.bit.GPIO65 = 0; // IN

    GpioCtrlRegs.GPCMUX1.bit.GPIO68 = 0;
    GpioCtrlRegs.GPCDIR.bit.GPIO68 = 1; // OUT
    GpioDataRegs.GPCCLEAR.bit.GPIO68 = 1;

    GpioCtrlRegs.GPCMUX1.bit.GPIO67 = 0;
    GpioCtrlRegs.GPCDIR.bit.GPIO67 = 1; // OUT
    GpioDataRegs.GPCCLEAR.bit.GPIO67 = 1;

    EDIS;
}

/**
 * 键盘扫描
 */
int key_scan(void) {
    if(GpioDataRegs.GPCDAT.bit.GPIO64==0)//第一列
    {
        delay_1ms(30);
        if(GpioDataRegs.GPCDAT.bit.GPIO64==0)
        {
            GpioDataRegs.GPCCLEAR.bit.GPIO67=1;//第一行输出低电平
            GpioDataRegs.GPCSET.bit.GPIO68=1;//第二行输出高电平
            delay_1ms(30);
            if(GpioDataRegs.GPCDAT.bit.GPIO64==0)
            {
                GpioDataRegs.GPCCLEAR.bit.GPIO67=1;
                GpioDataRegs.GPCCLEAR.bit.GPIO68=1;
                return 1;
            }
            else
            {
                GpioDataRegs.GPCCLEAR.bit.GPIO67=1;
                GpioDataRegs.GPCCLEAR.bit.GPIO68=1;
                return 2;
            }
        }
        else
            return 0;
    }
    else if(GpioDataRegs.GPCDAT.bit.GPIO65==0)//第二列
    {
        delay_1ms(30);
        if(GpioDataRegs.GPCDAT.bit.GPIO65==0)
        {
            GpioDataRegs.GPCCLEAR.bit.GPIO67=1;//第一行输出低电平
            GpioDataRegs.GPCSET.bit.GPIO68=1;//第二行输出高电平
            delay_1ms(30);
            if(GpioDataRegs.GPCDAT.bit.GPIO65==0)
            {
                GpioDataRegs.GPCCLEAR.bit.GPIO67=1;
                GpioDataRegs.GPCCLEAR.bit.GPIO68=1;
                return 3;
            }
            else
            {
                GpioDataRegs.GPCCLEAR.bit.GPIO67=1;
                GpioDataRegs.GPCCLEAR.bit.GPIO68=1;
                return 4;
            }
        }
        else
            return 0;
    }
    else
        return 0;

}

