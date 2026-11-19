///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:DisplayName()
// Description:A Program is used to accept the full name from the user and display that name.
// Input:Integer
// Output:Display the entered full name.
// Author:Aadesh Ameet Bartakke
// Date:19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Enter full name : \n");
    scanf("%[^\n]s",Name);

    printf("%s",Name);

    return EXIT_SUCCESS;
}