/*
 */

#include <avr/io.h>
#include<util/delay.h>
int main(void)
{

   DDRB|=(1<<PB0);
    // Insert code
  DDRD&=~(1<<PD2);
  PORTD|=(1<<PD2);
  DDRD&=~(1<<PD1);
  PORTD|=(1<<PD1);

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
