/////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: It is used to display a message multiple times.
// Input: None
// Output: Displays a "Marvellous" message five times.
// Author: Aadesh Ameet Bartakke
// Date: 18/10/2026
//
//////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void Display()
{
    int i = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();
    return EXIT_SUCCESS;
}