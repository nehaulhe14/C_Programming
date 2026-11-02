/*
accept the ammount in us dollers and return its 
indian value
input : 10
output : 700


*/

#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}