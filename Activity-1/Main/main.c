/*
 */

#include <avr/io.h>
#include<util/delay.h>
int main(void)
{

   DDRB|=(1<<PB0);// SET B0=1
  DDRD&=~(1<<PD2);// CLEAR BIT
  PORTD|=(1<<PD2);// SET BIT
  DDRD&=~(1<<PD1);// CLEAR BIT
  PORTD|=(1<<PD1);// SET BIT

    while(1)
    {
        if((!(PIND&(1<<PD2))) & (!(PIND&(1<<PD1))))
        {

        PORTB|=(1<<PB0);
        _delay_ms(200);
        }
        else{
        PORTB&=~(1<<PB0);
        _delay_ms(200);
    }
    }

    return 0;
}
