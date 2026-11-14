///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:CountOdd()
// Description: A Program is used to count the frequency of Odd Number in the given Range.
// Input: Integer
// Output: Display the Count of Odd Number
// Author: Aadesh Ameet Bartakke
// Date: 14/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)                  
    {
        iDigit = iNo % 10;
        
        if(iDigit % 2 != 0)
        {
            iCount ++;
        }

        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}