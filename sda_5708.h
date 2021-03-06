/*
* =====================================================================================
*       Filename:  sda_5708.h
*
*    Description:  Driver file for the sda 5708 device 
*
*        Version:  1.0 
*        Created:  26 November 2016 11:32
*
*         Author:  Olivier Pimi , pimium@gmail.com 
*   Organization:  Pimium 
*
* =====================================================================================
*/
#ifndef SDA_5708_H
#define SDA_5708_H

#include "hdr/hdr_gpio_masked_access.h"

#define CLK_pin 8
#define RESET_pin 9
#define CS_pin 8
#define DATA_pin 9

#define RESET (1 << RESET_pin)

void init_SDA(void);
void write_SDA_char(unsigned int position, unsigned int value);
void write_SDA(uint8_t value);

unsigned int reverse_value(unsigned int value);
void set_SDA_reset(void);
void clear_SDA_reset(void);

#endif /* SDA_5708_H */
