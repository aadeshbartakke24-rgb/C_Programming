///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Print Numbers Line
// Description: A Program is used to print the Numbers Line by the taking input Integer
// Input: Integer
// Output: Print Numbers from -n to +n
// Author: Aadesh Ameet Bartakke
// Date: 31/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<Stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo ;iCnt <= iNo; iCnt++)
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