/////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: It is used to display numbers from 5 to 1.
// Input: None
// Output: Displays numbers from 5 to 1.
// Author: Aadesh Ameet Bartakke
// Date: 18/10/2026
//
//////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display()
{
    int iCnt = 0;
    int i = 5;

    while (i >= 1)
    {
        printf("%d\t", i);
        i--;
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}
