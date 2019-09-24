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
#include "pacemakersc.h"
#include "timers.h"
#include "uart.h"
#include <unistd.h>

//const char variables to send over UART
const char charA[2] = "A";
const char charV[2] = "V";

//Pacemaker timeout values in milliseconds
#define AVI_VALUE 300
#define AEI_VALUE 800
#define PVARP_VALUE 50
#define VRP_VALUE 150
#define LRI_VALUE 950
#define URI_VALUE 600
#define LED_TIMEOUT 200

// Functions used in main.c
void button_interrupt(void* context, alt_u32 id);
void SET_output();
void timer_check();
int main();

#endif /* MAIN_H_ */
