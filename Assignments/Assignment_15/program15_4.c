
//  
// Q.4) Write a program which accept three numbers and print its
//      multiplication.                                
//  
// 
//---------------------------------------------------------------------
//  Input  : 5 4 7
//  Output : 140
//
//  Input  : 5 0 7
//  Output : 35
//
//  Input  : 5 0 0
//  Output : 5
//---------------------------------------------------------------------
//=====================================================================

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