/*
 * pacemaker.h
 *
 *  Created on: 22/09/2019
 *      Author: kevin
 */

#ifndef PACEMAKER_H_
#define PACEMAKER_H_

// Functions
void reset();
void tick();

// Inputs
extern char ASense;
extern char VSense;

char AEIExpired;
char AVIExpired;
char PVARPExpired;
char VRPExpired;
char URIExpired;
char LRIExpired;

//Outputs
char AEIStart;
char AVIStart;
char PVARPStart;
char VRPStart;
char URIStart;
char LRIStart;

char AEIStop;
char AVIStop;
char PVARPStop;
char VRPStop;
char URIStop;
char LRIStop;

char APace;
char VPace;

#endif /* PACEMAKER_H_ */
