/*
 * movingAverage_Helper.c
 *
 *  Created on: Oct 16, 2013
 *      Author: C15Payden.McBee
 */


int getAverage(int number)
 {

	    int sum=0;
	 	int i;
	 	int j;
	 	int avg;
	 	for(i=0;i<numSamplesBeingAveraged1Less;i++)
	 	{
	 		samplesBeingAveraged[i]=samplesBeingAveraged[i+1];
	 	}
	 	samplesBeingAveraged[numSamplesBeingAveraged]=number;
	 	for(j=0;j<numSamplesBeingAveraged;j++)
	 	{
	 		sum+=samplesBeingAveraged[j];
	 	}
	 	avg=sum/numSamplesBeingAveraged;
	 	return avg;
 }
int findMaxNum(int number)
{
	int currentHighest;
	if(number==0)
		{currentHighest=number;}
	if(currentHighest<number)
	{
		currentHighest=number;
	}
	return currentHighest;
}
int findMinNum(int number)
{
	int currentLowest;
		if(number==0)
			{currentLowest=number;}
		if(currentLowest>number)
		{
			currentLowest=number;
		}
		return currentLowest;
}
int findRange(int max, int min)
{
	int difference=0;
	difference=max-min;
	return difference;
}


