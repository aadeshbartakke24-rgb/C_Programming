///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CalculateDiscount
// Description: A Program is used to calculate discount based on purchase amount.
// Input: Purchase amount.
// Output: Prints the payable amount after applying discount.
// Author: Aadesh Ameet Bartakke
// Date: 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid purchase amount\n");
        return;
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000)
    {
        fDiscount = 10.0f;
    }
    else
    {
        fDiscount = 20.0f;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount / 100);

    printf("Payable Amount = %.2f\n", fFinalAmount);
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter the purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}