///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description: A Program is used to Display the pattern of stars (*) followed by hashes(#) 
// Input: Integer
// Output: Pattern of * and # symbols
// Author: Aadesh Ameet Bartakke
// Date: 12/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("*\t",iCnt);
    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("#\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}