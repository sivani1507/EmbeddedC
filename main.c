/**
 * @file main.c
 * @author Sivani Reddy
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
#include<avr/io.h>
#include<util/delay.h>
/**
 * @brief Functions
 * 
 */
void pro_1(void){
  DDRB|=(1<<PB0);// SET B0=1
  DDRD&=~(1<<PD2);// CLEAR BIT
  PORTD|=(1<<PD2);// SET BIT
  DDRD&=~(1<<PD1);// CLEAR BIT
  PORTD|=(1<<PD1);// SET BIT
  
  InitADC();
  InitP();
  USARTInit(103);
}
int main(void){
    uint16_t temp=0;
    uint16_t i;
    pro_1();
    while(1){
        if(sw1 && sw2){
        led(LED_ON);//LED is ON
        temp=ReadADC(0);
        OCR1A=temp;
        if(OCR1A>=0 && OCR1A<=200){
        unsigned char d1[]="Temperature :20 degree Celsius\n";
        i=0;
        while(d1[i]!=0){
        while(!(UCSR0A & (1<<UDRE0)));
        UDR0=d1[i];
        i++;
        }
        _delay_ms(200);
        }
        else if(OCR1A>=210 && OCR1A<=500){
        unsigned char d1[]="Temperature :25 degree Celsius\n";
        i=0;
        while(d1[i]!=0){
        while(!(UCSR0A & (1<<UDRE0)));
        UDR0=d1[i];
        i++;
        }
        _delay_ms(200);
        }
        else if(OCR1A>=510 && OCR1A<=700){
        unsigned char d1[]="Temperature :29 degree Celsius\n";
        i=0;
        while(d1[i]!=0){
        while(!(UCSR0A & (1<<UDRE0)));
        UDR0=d1[i];
        i++;
        }
        _delay_ms(200);
        }
        else if(OCR1A>=710 && OCR1A<=1024){
        unsigned char d1[]="Temperature :33 degree Celsius\n";
        i=0;
        while(d1[i]!=0){
        while(!(UCSR0A & (1<<UDRE0)));
        UDR0=d1[i];
        i++;
        }
        _delay_ms(200);
        }
        }
    
    else{
        led(LED_OFF); //LED is OFF
        _delay_ms(LED_OFF_TIME);
                }
}
return 0;
}