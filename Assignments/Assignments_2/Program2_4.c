////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display the Specified Number for the Specified Frequency
// Description: Accepts a number and frequency from user and displays the number for specified frequency.
// Input: Integer
// Output: Displays the number for the specified frequency.
// Author: Aadesh Ameet Bartakke
// Date: 19/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    // Write Updater
    for (iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf(" %d", iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    printf("Enter Frequency : \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}