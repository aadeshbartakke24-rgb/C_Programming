///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:EvenFactorial
// Description: A Program is used to Calculate the even factorial of a given number by multiplying
//               all even numbers from given number down to 2. 
// Input: Integer
// Output: Even factorial of the given number
// Author: Aadesh Ameet Bartakke
// Date: 12/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h.>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0,  iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}
