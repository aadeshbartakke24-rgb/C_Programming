///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:RectangleArea
// Description: A Program is used to calculate the area of a rectangle by accepting the width & height from the user 
// Input: Float(Width & Height of rectangle)
// Output: Area of the Rectangle
// Author: Aadesh Ameet Bartakke
// Date: 13/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}
int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width:");
    scanf("%f",&fValue1);
    
    printf("Enter Height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is:%f",dRet);

    return EXIT_SUCCESS;
}
