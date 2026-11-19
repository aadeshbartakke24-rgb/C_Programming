///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:NonFact()
// Description: A Program is used to display all non-factors of the given number.
// Input: Integer
// Output: Display all non-factors of the given number.
// Author: Aadesh Ameet Bartakke
// Date: 19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Nonfact(int iNo)
{
    int icnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(iNo % icnt != 0)
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

    Nonfact(iValue);

    return EXIT_SUCCESS;
}