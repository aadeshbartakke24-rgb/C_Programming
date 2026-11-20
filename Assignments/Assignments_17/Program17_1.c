///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Pattern
// Description: A Program is used to accept number of rows and columns from user and display continuous
//              numbers starting from 1 to 9 repeatedly in row-wise order.
// Input:Number of Rows (iRow) and Number of Columns (iCol).
// Output:Display continuous numbers from 1 to 9 repeatedly in the given pattern.
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

    for(i = 1, icnt = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)
         {
            if(icnt == 10)
            {  
                icnt = 1;
            }

            printf("%d\t",icnt);
            icnt++;
            
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