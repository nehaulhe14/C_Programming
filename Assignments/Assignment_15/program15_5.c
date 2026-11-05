
//  
// Q.5) Write a program which accept total marks & obtained marks 
//      from user and calculate percentage.            
//  
// 
//---------------------------------------------------------------------
//  Input  : 1000  745
//  Output : 74.5%
//---------------------------------------------------------------------
//=====================================================================

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