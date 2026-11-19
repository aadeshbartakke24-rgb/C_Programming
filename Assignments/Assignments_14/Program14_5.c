///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:FactDiff()
// Description: A Program is used to calculate the difference between the summation of all factors and
//              non-factors of the given number.
// Input: Integer
// Output: Display the multiplication of all digits.
// Author: Aadesh Ameet Bartakke
// Date: 19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////x
#include<stdio.h>
#include<stdlib.h>

int Sumnonfact(int iNo)
{
    int icnt = 0;
    int iOdd = 0;
    int iEvn = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt < iNo; icnt++)
    {
        if(iNo % icnt != 0)
        {
           iOdd = iOdd + icnt;
        }
        else
        {
            iEvn = iEvn + icnt;
        }
          
    }
    
   return iOdd - iEvn;
}

int main()
{
    int iValue  = 0;
    int iRet = 0;
    

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet =Sumnonfact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}