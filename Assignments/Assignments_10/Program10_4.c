///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:FhtoCs
// Description: A Program is used to convert the temperature from Fahrenheit to Celsius by accepting 
//              the temperature in Fahrenit from the user. 
// Input: Float(Temperature in Fahrenheit)
// Output: Temperature in Celsius
// Author: Aadesh Ameet Bartakke
// Date: 13/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dFho = 0.0;

    dFho = (fTemp - 32) * (5.0/9.0);

    return dFho;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is:%f",dRet);

    return EXIT_SUCCESS;
}