///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckAdmission
// Description: A Program is used to check admission eligibility based on marks and age.
// Input: Marks obtained and age.
// Output: Prints whether the candidate is eligible for admission.
// Author: Aadesh Ameet Bartakke
// Date: 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks >= 65.0f && iAge >= 18)
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not eligible for admission\n");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}