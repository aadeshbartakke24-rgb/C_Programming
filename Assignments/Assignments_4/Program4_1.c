///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckNumber
// Description: A Program is used to check if a number is zero, positive, or negative.
// Input: Integer
// Output: Prints the type of the number.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if (iValue == 0)
    {
        printf("Zero\n");
    }
    else if (iValue > 0)
    {
        printf("Positive Number\n");
    }
    else
    {
        printf("Negative Number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}