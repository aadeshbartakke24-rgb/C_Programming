///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:FactRev()
// Description: A Program is used to display all factors of the given number in decreasing order.
// Input: Integer
// Output: Display all factors in decreasing order.
// Author: Aadesh Ameet Bartakke
// Date: 19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Factrev(int iNo)
{
    int icnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt = iNo/2; icnt >= 1; icnt--)
    {
        if(iNo % icnt == 0)
        {
           printf("%d\t",icnt);
        }
    }
   
}

int main()
{
    int iValue  = 0;
    

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Factrev(iValue);

    return EXIT_SUCCESS;
}