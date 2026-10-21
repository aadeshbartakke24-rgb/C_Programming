///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FindGreater
// Description: A Program is used to find the greater of two numbers.
// Input: Two Integers
// Output: Prints the greater number.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}
int main()
{
    int iAge = 0;

    printf("Enter Age : \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}