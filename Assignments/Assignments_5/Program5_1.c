///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FindGreater
// Description: A Program is used to find the greater of three numbers.
// Input: Three Integers
// Output: Prints the greater number.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iValue1, int iValue2, int iValue3)
{
    if (iValue1 > iValue2 && iValue1 > iValue3)
    {
        printf("%d is Greater\n", iValue1);
    }
    else if (iValue2 > iValue3)
    {
        printf("%d is Greater\n", iValue2);
    }
    else
    {
        printf("%d is Greater\n", iValue3);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter Three Numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreater(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}