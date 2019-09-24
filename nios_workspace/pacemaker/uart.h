/*
 * uart.h
 *
 *  Created on: 23/09/2019
 *      Author: sshe325
 */

#ifndef UART_H_
#define UART_H_

#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include "pacemakersc.h"
#include "timers.h"

//define file pointer for UART stream
FILE* uart;
//define UART character buffer
char* byte;
//define UART functions
void checkuart();
#endif /* UART_H_ */
