////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayEven
// Description: It is used to display even numbers.
// Input: Integer
// Output: Displays even numbers up to the specified integer.
// Author: Aadesh Ameet Bartakke
// Date: 20/10/2026
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}