/*
print odd factorials
input : 5
output : 15 (5*3*1)


*/

#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

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

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}