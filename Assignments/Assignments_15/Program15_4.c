///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:MultThree()    
// Description:A Program is used to accept three numbers from the user and calculate their     
//              multiplication by considering non-zero values. 
// InputThree Integers  
// Output:Display the multiplication of non-zero numbers.
// Author:Aadesh Ameet Bartakke
// Date:19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }
    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }
    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}