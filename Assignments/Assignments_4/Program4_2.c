///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckEvenOdd
// Description: A Program is used to check if a number is Even or Odd.
// Input: Integer
// Output: Prints whether the number is Even or Odd.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if (iValue % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}