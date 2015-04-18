#ifndef _GPIO_H
#define _GPIO_H

#include <stdio.h>


void gpio_open(unsigned char port, unsigned char DDR);
void gpio_dir(unsigned char  port, unsigned char DDR);
void gpio_close(unsigned char port);
int gpio_read(unsigned char port);
void gpio_write(unsigned char port,unsigned char value);

#endif


