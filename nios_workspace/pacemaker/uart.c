/*
 * uart.c
 *
 *  Created on: 23/09/2019
 *      Author: sshe325
 */

#include "uart.h"

//function to check the UART for inputs
void checkuart(){
	//if a byte has been read
	if (read(uart,byte,1) > 0){
		if (*byte == 'A'){
			ASenseBuffer = 1;//set ASense high
			printf("ASense UART\n");
		}
		else if (*byte == 'V'){
			VSenseBuffer = 1;//set VSense high
			printf("VSense UART\n");
		}
		else{
			//reset buffers if invalid data
			VSenseBuffer = 0;
			ASenseBuffer = 0;
		}
	}
	else{
		//reset buffers if nothing read
		VSenseBuffer = 0;
		ASenseBuffer = 0;
	}
}
