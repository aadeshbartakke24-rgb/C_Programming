///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:CheckEqual()  
// Description:A Program is used to accept two numbers from the user and check whether both 
//              numbers are equal or not.
// Input:Two Integer
// Output:Display Equal or Not Equal. 
// Author:Aadesh Ameet Bartakke
// Date:19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter two numbers : \n");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}