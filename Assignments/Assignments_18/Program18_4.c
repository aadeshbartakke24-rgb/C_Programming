////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : A Program is used to accept number of rows and columns from user and display
//                 stars (*) at the boundary positions and @ symbols at the inner positions.
// Input         : Number of Rows (iRow) and Number of Columns (iCol)
// Output        : Display stars (*) on the boundary and @ symbols inside the pattern.
// Author        : Aadesh Ameet Bartakke
// Date          : 20/11/2026
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
   
    
    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)

       if((i == 1) || (i == irow) || (j == 1 ) || (j == icol))
       {
        printf("*\t");
       }
       else
       {
        printf("@\t");
       }
        
         printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter numbers of Rows and Columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}