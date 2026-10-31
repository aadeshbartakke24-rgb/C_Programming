///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:TableRev
// Description: A Program is used to Display the table of a given number 
// Input: Integer
// Output: Table of given number
// Author: Aadesh Ameet Bartakke
// Date: 31/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{

    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}