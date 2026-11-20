///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Pattern
// Description: A Program is used to accept number of rows and columns from user and display numbers
//              in descending order from the number of rows in each row.
// Input:Number of Rows (iRow) and Number of Columns (iCol).
// Output:Display descending numbers in each row of the pattern.
// Author:Aadesh Ameet Bartakke
// Date: 19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int icol)
{
    int i = 0, j = 0;
    int icnt = 0;
   
    
   

    for(i = iRow; i>= 1; i-- )
    {
        
        for(j = 1; j <= icol; j++)
        {
         printf("%d\t",i);
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