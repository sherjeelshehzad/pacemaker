/*
 * uart.c
 *
 *  Created on: 23/09/2019
 *      Author: sshe325
 */

#include "uart.h"

void checkuart(){
	if (read(uart,byte,1) > 0){
		if (*byte == 'A'){
			ASense = 1;//set ASense high
			printf("ASense UART\n");
			alt_alarm_start(&ASenseTimerReset,BUFFER,ASenseTimerISRReset,0x0); //set signal low after time buffer
		}
		else if (*byte == 'V'){
			VSense = 1;//set VSense high
			printf("VSense UART\n");
			alt_alarm_start(&VSenseTimerReset,BUFFER,VSenseTimerISRReset,0x0); //set signal low after time buffer
		}
	}
}
