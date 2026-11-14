///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:MultDigits()
// Description: A Program is used to calculate the multiplication of all digits in the given number.
// Input: Integer
// Output: Display the multiplication of all digits.
// Author: Aadesh Ameet Bartakke
// Date: 14/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)                  
    {
        iDigit = iNo % 10;
        
        iMult = iMult * iDigit;
        
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}