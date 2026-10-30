///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: PrintNumbers
// Description: A Program is used to print the Numbers by the taking input Integer
// Input: Integer
// Output: Print Number
// Author: Aadesh Ameet Bartakke
// Date: 31/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
} 

int main()
{

    int iValue  = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}