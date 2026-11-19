///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:MultFact()
// Description: A Program is used to calculate the multiplication of all factors of the given number.
// Input: Integer
// Output: Display the multiplication of all factors.
// Author: Aadesh Ameet Bartakke
// Date: 19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Multifact(int iNo)
{
    int icnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt = 1; icnt <= iNo/2; icnt++)
    {
        if(iNo % icnt == 0)
        {
            iMul = iMul * icnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = Multifact(iValue);
    
    printf("%d",iRet);


    return EXIT_SUCCESS;
}