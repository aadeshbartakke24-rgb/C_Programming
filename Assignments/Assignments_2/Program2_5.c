////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckEven or Odd
// Description: It is used to check if a number is even or odd.
// Input: Integer
// Output: Returns true if the number is even, false otherwise.
// Author: Aadesh Ameet Bartakke
// Date: 19/10/2026
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if (bRet == true)
    {
        printf("The Number is Even\n");
    }
    else
    {
        printf("The Number is Odd\n");
    }

    return EXIT_SUCCESS;
}