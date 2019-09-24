/*
 * timers.c
 *
 *  Created on: 23/09/2019
 *      Author: sshe325
 */

#include "timers.h"

//these are all mappings for the timers expiring
alt_u32 AEITimerISR(void* context){
	AEIExpired = 1;
	AEITimerStarted = 0;
	alt_alarm_start(&AEITimerReset, BUFFER, AEITimerISRReset, 0x0);
	printf("AEIExpired\r\n");
	return 0;
}

alt_u32 AVITimerISR(void* context){
	AVIExpired = 1;
	AVITimerStarted = 0;
	alt_alarm_start(&AVITimerReset, BUFFER, AVITimerISRReset, 0x0);
	printf("AVIExpired\r\n");
	return 0;
}

alt_u32 LRITimerISR(void* context){
	LRIExpired = 1;
	LRITimerStarted = 0;
	alt_alarm_start(&LRITimerReset, BUFFER, LRITimerISRReset, 0x0);
	printf("LRIExpired\r\n");
	return 0;
}

alt_u32 URITimerISR(void* context){
	URIExpired = 1;
	URITimerStarted = 0;
	alt_alarm_start(&URITimerReset, BUFFER, URITimerISRReset, 0x0);
	printf("URIExpired\r\n");
	return 0;
}

alt_u32 VRPTimerISR(void* context){
	VRPExpired = 1;
	VRPTimerStarted = 0;
	alt_alarm_start(&VRPTimerReset, BUFFER, VRPTimerISRReset, 0x0);
	printf("VRPExpired\r\n");
	return 0;
}

alt_u32 PVARPTimerISR(void* context){
	PVARPExpired = 1;
	PVARPTimerStarted = 0;
	alt_alarm_start(&PVARPTimerReset, BUFFER, PVARPTimerISRReset, 0x0);
	printf("PVARPExpired\r\n");
	return 0;
}

//these are all timer buffers
alt_u32 AEITimerISRReset(void* context){
	AEIExpired = 0;
	return 0;
}

alt_u32 AVITimerISRReset(void* context){
	AVIExpired = 0;
	return 0;
}

alt_u32 LRITimerISRReset(void* context){
	LRIExpired = 0;
	return 0;
}

alt_u32 URITimerISRReset(void* context){
	URIExpired = 0;
	return 0;
}

alt_u32 VRPTimerISRReset(void* context){
	VRPExpired = 0;
	return 0;
}

alt_u32 PVARPTimerISRReset(void* context){
	PVARPExpired = 0;
	return 0;
}

alt_u32 ASenseTimerISRReset(void* context){
	ASense = 0;
	return 0;
}

alt_u32 VSenseTimerISRReset(void* context){
	VSense = 0;
	return 0;
}

alt_u32 APLEDTimerISR(void* context){
	APLEDTimerStarted = 0;
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0b00); //turn off LEDs
	printf("APLEDExpired\r\n");
	return 0;
}

alt_u32 VPLEDTimerISR(void* context){
	VPLEDTimerStarted = 0;
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0b00); //turn off LEDs
	printf("VPLEDExpired\r\n");
	return 0;
}
