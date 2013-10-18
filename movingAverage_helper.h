/*
 * movingAverage_helper.h
 *
 *  Created on: Oct 16, 2013
 *      Author: C15Payden.McBee
 *      using code from Capt Branchflower modified
 * Description: Functions to update and monitor a moving average
 * and find maximum and minimums of a list of numbers
 */

#ifndef MOVINGAVERAGE_HELPER_H_
#define MOVINGAVERAGE_HELPER_H_

int getAverage(int number);

// Array functions
int findMaxNum(int number);
int findMinNum(int number);

int numList[] = {1,2,3,4,5,6};
int samplesBeingAveraged[2]={0,0};
int numSamplesBeingAveraged=2;
int numSamplesBeingAveraged1Less=1;
int average;

#endif /* MOVINGAVERAGE_HELPER_H_ */

