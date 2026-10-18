//////////////////////////////////////////////////////////////////////////
//
// Function Name: Check
// Description: It is used to check if a number is divisible by 5.
// Input: Integer
// Output: Returns true if the number is divisible by 5, false otherwise.
// Author: Aadesh Ameet Bartakke
// Date: 18/10/2026
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Check(int iNo)
{
    if ((iNo % 5) == 0)
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

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);
    if (bRet == true)
    {
        printf("The number is divisible by 5 : \n");
    }
    else
    {
        printf("The number is not divisible by 5 : \n");
    }
    return EXIT_SUCCESS;
}