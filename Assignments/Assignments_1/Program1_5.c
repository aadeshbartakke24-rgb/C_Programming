/////////////////////////////////////////////////////////////
//
// Function Name: Accept
// Description: It is used to display a message multiple times.
// Output: Displays a "*" message five times.
// Author: Aadesh Ameet Bartakke
// Date: 18/10/2026
//
//////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return EXIT_SUCCESS;
}