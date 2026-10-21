///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckDivisibility
// Description: A Program is used to check divisibility by 5.
// Input: Integer
// Output: Prints whether the number is divisible by 5.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if (iValue % 5 == 0)
    {
        printf("%d is Divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is Not Divisible by 5\n", iValue);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}