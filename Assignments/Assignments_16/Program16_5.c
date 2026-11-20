///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Pattern
// Description: A Program is used to accept number of rows and columns from user and display consecutive
//              numbers starting from 1 in row-wise order.
// Input:Number of Rows (iRow) and Number of Columns (iCol).
// Output:Display consecutive numbers in row-wise order.
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
   

    for(i = 1 , icnt = 1; i <= iRow; i++)
    {
        
        for(j = 1; j <= icol; j++ , icnt++)
        {
        
            printf("%d\t",icnt);
         
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