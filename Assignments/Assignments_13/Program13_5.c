/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:CountDiff()
// Description: A Program is used to calculate the Sum of even digits and odd digits and return the difference between both sums.
// Input: Integer
// Output: Display the Difference between sum of even digits and sum of odd digits.
// Author: Aadesh Ameet Bartakke
// Date: 15/11/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)                  
    {
        iDigit = iNo % 10;
        
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }
    return (iEvenSum - iOddSum);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}