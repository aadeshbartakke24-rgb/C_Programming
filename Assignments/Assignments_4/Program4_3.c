///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FindGreater
// Description: A Program is used to find the greater of two numbers.
// Input: Two Integers
// Output: Prints the greater number.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iValue1, int iValue2)
{
    if (iValue1 > iValue2)
    {
        printf("%d is Greater\n", iValue1);
    }
    else if (iValue1 < iValue2)
    {
        printf("%d is Greater\n", iValue2);
    }
    else
    {
        printf("Both Numbers are Equal\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Two Numbers : \n");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}