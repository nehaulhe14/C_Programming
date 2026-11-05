/*
accept a range from user and return addition of all numbers
in btw that range
input : 23 30
output : 212

input : -10 2 
output : invalid range
*/

#include<stdio.h>
#include<stdlib.h>

int RangeDisplaySum(int iNo1 , int iNo2)
{
    int icnt =0;
    int iSum = 0;

    if (iNo1<0 || iNo2<0 || iNo1>iNo2)
    {
        printf("invalid input\n");
        return 0;
    }
    
    for (icnt=iNo1 ; icnt<=iNo2 ; icnt++)
    {
        iSum = iSum + icnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter first range\n");
    scanf("%d",&iValue1);

    printf("Enter second range\n");
    scanf("%d",&iValue2);



 iRet=RangeDisplaySum(iValue1 , iValue2);
    if(iRet>0)
    {
       printf("addition is :%d\n",iRet);
    }

    return EXIT_SUCCESS;
}