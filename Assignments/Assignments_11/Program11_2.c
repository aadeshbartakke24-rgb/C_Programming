//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:RangeDisplayEven()
// Description: A Program is used to Display all Even numbers between the given range.
// Input: Integer
// Output: Display Even Number between given range
// Author: Aadesh Ameet Bartakke
// Date: 13/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart,  int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = iStart; iCnt <= iEnd;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}


