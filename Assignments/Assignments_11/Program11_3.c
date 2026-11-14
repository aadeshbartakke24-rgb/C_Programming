///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:RangeSum()
// Description: A Program is used to calculate the addition of all numbers between the given range.
// Input: Two Integer(Starting point and End point)
// Output: Addition of all numbers between the given range
// Author: Aadesh Ameet Bartakke
// Date: 14/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}    
int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return EXIT_SUCCESS;
}