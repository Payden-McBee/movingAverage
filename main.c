//Created by: C2C Payden W. McBee
//Created on: 15 Oct 2013
//Last Revised: 16 October 2013
//Purpose: Calculates a moving average
//
#include <msp430.h> 
#include "movingAverage_helper.h"

void main(void) {

	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	int counter;
	int numListLength=6;
	int max;
	int min;
	int range;

    for(counter=0;counter<numListLength;counter++)
    {
        average=getAverage(numList[counter]);
        max=findMaxNum(numList[counter]);
        min=findMinNum(numList[counter]);
    }

    range=findRange(max,min);

	while(1) {}
}
