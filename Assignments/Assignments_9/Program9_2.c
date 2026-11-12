///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:DollarToINR
// Description: A Program is used to Convert the given amount of US Dollar into Indian Rupees.(1 USD = 70 INR) 
// Input: Integer(USD)
// Output: Equivalent amount in Indian Rupees(INR)
// Author: Aadesh Ameet Bartakke
// Date: 12/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iAns = 0;
    iAns = iNo * 70;
    return iAns;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}