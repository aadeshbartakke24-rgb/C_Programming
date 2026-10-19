////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: It is used to display a "*" message with specified number of times.
// Input: Integer
// Output: Displays a "*" message with specified number of times.
// Author: Aadesh Ameet Bartakke
// Date: 19/10/2026
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    // Write Updater
    while (iNo > 0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}