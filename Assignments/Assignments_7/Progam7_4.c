///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Print Odd Nmbers
// Description: A Program is used to print the Odd Numbers by the taking input Integer
// Input: Integer
// Output: Print Odd Numbers
// Author: Aadesh Ameet Bartakke
// Date: 31/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<Stdlib.h>

void OddDisplay(int iNo)
{
       int iCnt = 0;

    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 !=0)
        {
            printf("%d\t",iCnt);
        }
    }
    
} 

int main()
{

    int iValue  = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}