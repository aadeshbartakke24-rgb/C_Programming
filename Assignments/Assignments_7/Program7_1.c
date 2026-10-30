///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: PrintSymbols
// Description: A Program is used to print the symbols by the taking input Integer
// Input: Integer
// Output: Prints Symbols *,$
// Author: Aadesh Ameet Bartakke
// Date: 31/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");

    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}