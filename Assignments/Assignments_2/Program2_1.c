//////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: It is used to display a "*" message a specified number of times.
// Input: Integer
// Output: Displays a "*" message a specified number of times.
// Author: Aadesh Ameet Bartakke
// Date: 19/10/2026
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while (iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}