/*
 * pacemakersc.h
 *
 *  Created on: 22/09/2019
 *      Author: kevin
 */

#ifndef PACEMAKERSC_H_
#define PACEMAKERSC_H_

// Functions
void reset();
void tick();

// Inputs
char ASense;
char VSense;

volatile char AEIExpired;
volatile char AVIExpired;
volatile char PVARPExpired;
volatile char VRPExpired;
volatile char URIExpired;
volatile char LRIExpired;

//Outputs
volatile char AEIStart;
volatile char AVIStart;
volatile char PVARPStart;
volatile char VRPStart;
volatile char URIStart;
volatile char LRIStart;

volatile char AEIStop;
volatile char AVIStop;
volatile char PVARPStop;
volatile char VRPStop;
volatile char URIStop;
volatile char LRIStop;

char APace;
char VPace;

#endif /* PACEMAKERSC_H_ */
