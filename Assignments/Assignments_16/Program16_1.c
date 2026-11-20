///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Pattern
// Description: A Program is used to accept numbers of rows and columns from user and display
//                alphabets A, B, C and D in each row of the pattern.
// Input:Numbers of Rows (iRow) and Number of Columns (iCol).
// Output:Display alphabets A, B, C and D in every row.
// Author:Aadesh Ameet Bartakke
// Date: 19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int icol)
{
    int i = 0, j = 0;
    char ch = '\0';

    

    for(i = 1; i<= iRow; i++)
    {
        ch = 'A';
        for(j = 1; j <= icol; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows and col :\n");
    scanf("%d %d",&iValue1,&iValue2);
    
    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}