///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:DisplayDigit()
// Description: A Program is used to Display each digit of the given number in reverse order.
// Input: Integer
// Output: Display Digit of the given number in reverse order.
// Author: Aadesh Ameet Bartakke
// Date: 14/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);

        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}