///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Factorial
// Description: A Program is used to find the factorial of a given number 
// Input: Integer
// Output: Factorial of given number
// Author: Aadesh Ameet Bartakke
// Date: 31/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    
    printf("Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}