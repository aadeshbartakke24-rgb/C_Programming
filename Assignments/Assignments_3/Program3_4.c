////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayConvert
// Description: A Program is used to convert a character from lowercase to uppercase and vice versa.
// Input: Character
// Output: Displays the converted character.
// Author: Aadesh Ameet Bartakke
// Date: 20/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayConvert(char CValue)
{
    if (CValue >= 'a' && CValue <= 'd')
    {
        printf("%c", CValue - 32);
    }
    else if (CValue >= 'A' && CValue <= 'D')
    {
        printf("%c", CValue + 32);
    }
}
int main()
{
    char CValue = '\0';
    printf("Enter Character : \n");
    scanf("%c", &CValue);

    DisplayConvert(CValue);

    return EXIT_SUCCESS;
}