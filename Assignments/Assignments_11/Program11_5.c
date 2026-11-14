///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:RangeDisplayRev()
// Description: A Program is used to Display all numbers between the given range in reverse.
// Input: Integer
// Output: Display Number in Reverse between given range
// Author: Aadesh Ameet Bartakke
// Date: 14/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iEnd <= iStart)
    {
        for(iCnt = iEnd; iCnt <= iStart;iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }
    else
    {
        for(iCnt = iEnd; iCnt >= iStart;iCnt--)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}