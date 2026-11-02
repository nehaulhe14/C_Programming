/*
print even factorials
input : 5
output : 8 (4*2)


*/

#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

int EvenFactorial(int iNo)
{
    int icnt = 0, i = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 2; i <= iNo; icnt += 2)
    {
        i = i * icnt;
    }

    return i;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}