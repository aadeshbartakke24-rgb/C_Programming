///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:SquareMeter
// Description: A Program is used to convert the area from square feet into square meters by accepting 
//              the area in square feet from user.  
// Input: Integer(Area in square feet)
// Output: Area in square meters 
// Author: Aadesh Ameet Bartakke
// Date: 13/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.0929;

    return dArea;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in Square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter:%f",dRet);

    return EXIT_SUCCESS;
}
