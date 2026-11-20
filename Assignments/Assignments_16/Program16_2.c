///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Pattern
// Description: A Program is used to accept numbers of rows and columns from user and display
//                uppercase and lowercase alphabets alternately in each row.
// Input:Numbers of Rows (iRow) and Number of Columns (iCol).
// Output:Display uppercase and lowercase alphabets in alternate rows.
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
    

    

    for(i = 1,ch = 'A'; i<= iRow; i++ ,ch++)
    {
            if(i % 2 == 0)
            {
                ch = 'a';
            
            }
            else
            {
                ch = 'A';
                
            }
            for(j = 1; j <= icol; j++,ch++)
            {
                printf("%c\t",ch);
                
            }
            printf("\n\n");
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