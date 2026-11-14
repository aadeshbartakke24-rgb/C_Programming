///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Count()
// Description: A Program is used to count the frequency of digits which are less than 6 in the given number.
// Input: Integer
// Output: Display the Count of digits which are less than 6.
// Author: Aadesh Ameet Bartakke
// Date: 14/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)                  ///// By Using while Loop 
    {
        iDigit = iNo % 10;
        
        if(iDigit <= 6)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}