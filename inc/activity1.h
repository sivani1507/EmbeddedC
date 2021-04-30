/**
 * @file activity1.h
 * @author Sivani Reddy
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY1_H__
#define __ACTIVITY1_H__
/**
 * @brief Include files
 * 
 */
#include<avr/io.h>
#include<util/delay.h>
#include "activity1.h"
/**
 * @brief Macro definitions
 * 
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */
#define LED_PORT (PORTB)
#define LED_PIN (PORTB1)
#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (500)   /**< LED OFF time in milli seconds */
#define sw1 !(PIND&(1<<PD1)) //Switch1 ON
#define sw2 !(PIND&(1<<PD2)) //Switch2 ON
/**
 * @brief Defining functions
 * 
 * @param st 
 */
void led(uint8_t st);
#endif
/**
 * @brief End
 * 
 */