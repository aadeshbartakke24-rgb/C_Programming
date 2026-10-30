///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Multiple Display
// Description: A Program is used to print the first 5 multiples of the given number
// Input: Integer
// Output: First 5 multiples of the given number
// Author: Aadesh Ameet Bartakke
// Date: 31/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<Stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ;iCnt <= 5; iCnt++)
    {    
        printf("%d\t",iNo * iCnt);
    }
    
} 

int main()
{

    int iValue  = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}