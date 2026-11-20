///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Pattern
// Description: A Program is used to accept numbers of rows and columns from user and display
//                alphabets A, B and C column-wise in the given pattern.
// Input:Numbers of Rows (iRow) and Number of Columns (iCol).
// Output:Display alphabets A, B and C in each column.
// Author:Aadesh Ameet Bartakke
// Date: 19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int icol)
{
    int i = 0, j = 0;
   
    
    ch = 'A';

    for(i = 1; i<= iRow; i++, ch++ )
    {
        for(j = 1; j <= icol; j++)
        {
            printf("%C\t",ch);
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