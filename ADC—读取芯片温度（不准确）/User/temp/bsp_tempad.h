#ifndef __TEMPADC_H
#define	__TEMPADC_H


#include "stm32f10x.h"

//对于12位的ADC，3.3V的ADC值为0xfff,温度为25度时对应的电压值为1.43V即0x6EE
#define V25  0x6EE	 

//斜率 每摄氏度4.3mV 对应每摄氏度0x05
#define AVG_SLOPE 0x05

//ADC1_BASE地址：0x4000 0000+0x2400 即ADC1的基地址，而他的规则数据寄存器的偏移地址是：0x4c
 #define ADC1_DR_Address    ((u32)ADC1_BASE+0x4c)

void Temp_ADC1_Init(void);


#endif /* __TEMPADC_H */
