/**
 * @file activity3.c
 * @author Sivani Reddy
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "activity3.h"
#include<util/delay.h>
/**
 * @file activity3.c
 * @author Sivani Reddy
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include "activity3.h"
/**
 * @brief Initialization
 * 
 */
void InitP()
{
    TCCR1A |=(1<<COM1A1)|(1<<WGM11) | (1<<WGM10);
TCCR1B|=(1<<WGM12) | (1<<CS12) | (1<<CS10);
DDRB |=1<<PB1;
}