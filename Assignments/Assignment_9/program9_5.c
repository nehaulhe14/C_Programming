/*
program which returns difference btw wvwn factors and odd factors
input : 5
output : -7 (8-15)


*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int icnt = 0, i = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 2; icnt <= iNo; icnt += 2)
    {
        i = i * icnt;
    }

    return i;
}

int OddFactorial(int iNo)
{
    int icnt = 0, i = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt += 2)
    {
        i = i * icnt;
    }

    return i;
}

int FactorialDiff(int iNo)
{
    return EvenFactorial(iNo) - OddFactorial(iNo);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}