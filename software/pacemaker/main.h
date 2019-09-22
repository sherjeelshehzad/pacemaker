/*
 * main.h
 *
 *  Created on: 22/09/2019
 *      Author: kevin
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include "sys/alt_alarm.h"
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <math.h>
#include <string.h>
#include <alt_types.h> //alt_u32 is a kind of alt_type
#include <sys/alt_irq.h> //to register interrupts

// Example timeout values in milliseconds
#define AVI_VALUE 300
#define AEI_VALUE 800
#define PVARP_VALUE 50
#define VRP_VALUE 150
#define LRI_VALUE 950
#define URI_VALUE 900

// Functions
void button_interrupt(void* context, alt_u32 id);
int main();

#endif /* MAIN_H_ */