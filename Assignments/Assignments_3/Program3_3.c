////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayEvenFactor
// Description: A Program is used to display all even factors of a number.
// Input: Integer
// Output: Displays all even factors of the specified integer.
// Author: Aadesh Ameet Bartakke
// Date: 20/10/2026
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= +iNo; i++)
    {
        if ((iNo % i) == 0 && (i % 2) == 0)
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}