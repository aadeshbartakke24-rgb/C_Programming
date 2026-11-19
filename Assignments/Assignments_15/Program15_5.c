///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Percentage()  
// Description: A Program is used to accept total marks and obtained marks from the user and       
//              calculate the percentage.
// Input:Total Marks and Obtained Marks    
// Output:Return and display the calculated percentage.   
// Author:Aadesh Ameet Bartakke
// Date: 19/11/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

float CalculatePercentage(int iTotal, int iObtained)
{
    float fPer = 0.0f;

    if(iTotal == 0)
    {
        return 0.0f;
    }

    fPer = ((float)iObtained / (float)iTotal) * 100.0f;

    return fPer;
}

int main()
{
    int iTotalMarks = 0;
    int iObtMarks = 0;
    float fRet = 0.0f;

    printf("Enter total marks : \n");
    scanf("%d",&iTotalMarks);

    printf("Enter obtained marks : \n");
    scanf("%d",&iObtMarks);

    fRet = CalculatePercentage(iTotalMarks,iObtMarks);

    printf("%.1f%%",fRet);

    return EXIT_SUCCESS;
}