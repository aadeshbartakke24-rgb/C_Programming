///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckLeapYear
// Description: A Program is used to check if a year is a leap year.
// Input: An integer representing the year.
// Output: Prints whether the year is a leap year.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if (iYear < 0)
    {
        printf("Invalid Year\n");
    }
    else if ((iYear % 4 == 0 && iYear % 100 != 0) || (iYear % 400 == 0))
    {
        printf("%d is a Leap Year\n", iYear);
    }
    else
    {
        printf("%d is Not a Leap Year\n", iYear);
    }
}
int main()
{
    int iYear = 0;

    printf("Enter Year : \n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}