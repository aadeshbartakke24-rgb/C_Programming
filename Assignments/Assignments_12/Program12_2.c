///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:CheckZero()
// Description: A Program is used to check whether the given number is zero or not.
// Input: Integer
// Output: It Contains Zero/There is no Zero.
// Author: Aadesh Ameet Bartakke
// Date: 14/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            break;
        }

        iNo = iNo / 10;
    }
    if(iDigit == 0)
    {
        return TRUE;
    }
    return FALSE;
}    
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet ==TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return EXIT_SUCCESS;
}
