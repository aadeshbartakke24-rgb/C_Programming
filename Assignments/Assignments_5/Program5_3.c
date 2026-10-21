///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckGrade
// Description: A Program is used to check the grade based on marks.
// Input: An integer representing the marks.
// Output: Prints the corresponding grade.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(int iMarks)
{
    if (iMarks < 0 || iMarks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if (iMarks >= 90)
    {
        printf("Grade A\n");
    }
    else if (iMarks >= 80)
    {
        printf("Grade B\n");
    }
    else if (iMarks >= 70)
    {
        printf("Grade C\n");
    }
    else if (iMarks >= 60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}
int main()
{
    int iMarks = 0;

    printf("Enter Marks : \n");
    scanf("%d", &iMarks);

    DisplayGrade(iMarks);

    return EXIT_SUCCESS;
}