///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CalculateElectricityBill
// Description: A Program is used to calculate the electricity bill based on unit consumption.
// Input: Number of units consumed.
// Output: Prints the calculated electricity bill.
// Author: Aadesh Ameet Bartakke
// Date: 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalulateElectricityBill(int units)
{
    float fBill = 0.0f;

    if (units < 0)
    {
        printf("Invalid unit consumption\n");
    }
    else if (units <= 100)
    {
        fBill = units * 5;
    }
    else if (units <= 200)
    {
        fBill = (100 * 5) + ((units - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    if (units >= 0)
    {
        printf("Bill = %.2f\n", fBill);
    }
}
int main()
{
    int units;
    printf("Enter the consumed units s: ");
    scanf("%d", &units);

    CalulateElectricityBill(units);

    return EXIT_SUCCESS;
}