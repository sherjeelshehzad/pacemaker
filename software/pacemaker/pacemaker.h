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

extern char AEIExpired;
extern char AVIExpired;
extern char PVARPExpired;
extern char VRPExpired;
extern char URIExpired;
extern char LRIExpired;

//Outputs
extern char AEIStart;
extern char AVIStart;
extern char PVARPStart;
extern char VRPStart;
extern char URIStart;
extern char LRIStart;

extern char AEIStop;
extern char AVIStop;
extern char PVARPStop;
extern char VRPStop;
extern char URIStop;
extern char LRIStop;

extern char APace;
extern char VPace;

#endif /* PACEMAKER_H_ */
