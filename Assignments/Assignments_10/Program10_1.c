///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:CircleArea
// Description: A Program is used to calculate the area of a circle by accepting the radius from the user 
// Input: Float(Radius of circle)
// Output: Area of the Circle
// Author: Aadesh Ameet Bartakke
// Date: 13/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Number: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is: %f",dRet);

    return EXIT_SUCCESS;
}