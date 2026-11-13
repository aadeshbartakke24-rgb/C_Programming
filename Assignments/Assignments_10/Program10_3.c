/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Kilometer to Meter
// Description: A Program is used to convert the Distance from kilometer into meters by accepting the distance from user. 
// Input: Integer(Distance in meters)
// Output: Distance in meters.
// Author: Aadesh Ameet Bartakke
// Date: 13/11/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int KMeter = 0;

    KMeter = iNo * 1000;

    return KMeter;
}
int main()
{
    int iValue = 0, iRet =0;

    printf("Enter Distance:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is:%d\n",iRet);

    return EXIT_SUCCESS;
}