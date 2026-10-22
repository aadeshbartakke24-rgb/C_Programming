///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CalculateBonus
// Description: A Program is used to calculate bonus based on salary and years of service.
// Input: Salary and years of service.
// Output: Prints the calculated bonus amount.
// Author: Aadesh Ameet Bartakke
// Date: 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary < 0 || iYears < 0)
    {
        printf("Invalid salary or years of service\n");
        return;
    }

    if (iYears < 5)
    {
        fBonus = 0.05f * fSalary;
    }
    else if (iYears < 10)
    {
        fBonus = 0.10f * fSalary;
    }
    else
    {
        fBonus = 0.15f * fSalary;
    }

    printf("Bonus Amount = %.2f\n", fBonus);
}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}