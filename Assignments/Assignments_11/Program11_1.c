///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:RangeDisplay()
// Description: A Program is used to Display all numbers between the given range.
// Input: Integer
// Output: Display Number between given range
// Author: Aadesh Ameet Bartakke
// Date: 13/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd;iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }
    else
    {
        for(iCnt = iStart; iCnt >= iEnd;iCnt--)
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

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}