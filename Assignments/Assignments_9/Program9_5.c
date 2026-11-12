///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Factorial Difference
// Description: A Program is used to Calculate the difference between even factorial and odd factorial of a given number 
// Input: Integer
// Output: Difference between even factorial and odd factorial 
// Author: Aadesh Ameet Bartakke
// Date: 12/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iOddFact = iOddFact * iCnt;
    }
    return (iEvenFact - iOddFact);
}
int main()
{
    int iValue = 0,  iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return EXIT_SUCCESS;
}
