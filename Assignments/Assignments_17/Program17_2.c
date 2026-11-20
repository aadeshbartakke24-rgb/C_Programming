///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Pattern
// Description: A Program is used to accept number of rows and columns from user and display even and 
//               odd numbers alternately in each row of the pattern.
// Input:Number of Rows (iRow) and Number of Columns (iCol).
// Output:Display even and odd numbers alternately in successive rows.
// Author:Aadesh Ameet Bartakke
// Date: 20/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
    int icnt = 0;
    

    for(i = 1; i <= irow; i++)
    {
        if(i % 2 != 0 )
        {
            icnt = 2;
        }
        else
        {
            icnt = 1;
        }

        for(j = 1; j <= icol; j++)
        {
            printf("%d\t",icnt);
            icnt  = icnt + 2;
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