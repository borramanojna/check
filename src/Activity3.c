#include <avr/io.h>
#include <Activity3.h>
#include<stdint.h>

void decltimer()
{
    TCCR0A|=(1<<COM0A1)|(1<<WGM00)|(1<<WGM01);
    TCCR0B|=(1<<CS00)|(1<<CS01);
    DDRD|=(1<<PD6);
}

void pwm(uint16_t temp)
{
    if((temp>=0)&&(temp <=200))

    {
          OCR0A=51;
    }
    else if((temp>210)&&(temp <=500))
    {
        OCR0A=102;
    }
    else if((temp>510)&&(temp <=700))
         {
             OCR0A=178;
         }
         else if((temp>710)&&(temp <=1024))
         {
             OCR0A=242;
         }
}
