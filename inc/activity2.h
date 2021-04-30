/**
 * @file activity2.h
 * @author Sivani Reddy
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__
#include<avr/io.h>
#include<util/delay.h>
/**
 * @brief Reading Analog values
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);
void InitADC();
#endif
/**
 * @brief end
 * 
 */