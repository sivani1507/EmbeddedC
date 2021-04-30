/**
 * @file activity1.c
 * @author Sivani Reddy
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include<avr/io.h>
#include<util/delay.h>
/**
 * @brief Led change state
 * 
 * @param st 
 */
void led(uint8_t st)
{
    LED_PORT=(st << LED_PIN);
}