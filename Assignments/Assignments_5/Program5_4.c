///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckMultipleDivisibility
// Description: A Program is used to check if a number is divisible by 3 and/or 5.
// Input: An integer representing the number.
// Output: Prints whether the number is divisible by 3 and/or 5.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if (iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("%d is Divisible by both 3 and 5\n", iValue);
    }
    else if (iValue % 3 == 0)
    {
        printf("%d is Divisible by 3\n", iValue);
    }
    else if (iValue % 5 == 0)
    {
        printf("%d is Divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is Not Divisible by either 3 or 5\n", iValue);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}