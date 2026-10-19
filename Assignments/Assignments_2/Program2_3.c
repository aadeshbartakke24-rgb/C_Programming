///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display a Hello Or Demo message based on the input number
// Description: It is used to display a Hello or Demo message based on the input number
// Input: Integer
// Output: Displays a Hello or Demo message based on the input number
// Author: Aadesh Ameet Bartakke
// Date: 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    if (iNo <= 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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
