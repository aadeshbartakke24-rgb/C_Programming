///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckTriangle
// Description: A Program is used to check if three sides can form a valid triangle.
// Input: Three sides of the triangle.
// Output: Prints whether the triangle is valid or not.
// Author: Aadesh Ameet Bartakke
// Date: 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int inside1, int inside2, int inside3)
{
    if (inside1 <= 0 || inside2 <= 0 || inside3 <= 0)
    {
        printf("Invalid triangle sides\n");
        return;
    }

    if (inside1 + inside2 > inside3 && inside1 + inside3 > inside2 && inside2 + inside3 > inside1)
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
}
int main()
{
    int inside1 = 0, inside2 = 0, inside3 = 0;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &inside1, &inside2, &inside3);

    CheckTriangle(inside1, inside2, inside3);

    return EXIT_SUCCESS;
}