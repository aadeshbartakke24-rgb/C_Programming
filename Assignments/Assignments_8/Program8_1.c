///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Number
// Description: A Program is used to check whether the given number is small, medium or large
// Input: Integer
// Output: Small, Medium or Large
// Author: Aadesh Ameet Bartakke
// Date: 31/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}