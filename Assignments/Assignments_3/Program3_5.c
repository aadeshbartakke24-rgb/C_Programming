////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckVowel
// Description: A Program is used to check if a character is a vowel or not.
// Input: Character
// Output: Returns true if the character is a vowel, false otherwise.
// Author: Aadesh Ameet Bartakke
// Date: 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckVowel(char CValue)
{
    if (CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' || CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char CValue = '\0';
    bool bRet = false;

    printf("Enter Character : \n");
    scanf("%c", &CValue);

    bRet = CheckVowel(CValue);

    if (bRet == true)
    {
        printf("It is a vowel.\n");
    }
    else
    {
        printf("It is not a vowel.\n");
    }

    return EXIT_SUCCESS;
}