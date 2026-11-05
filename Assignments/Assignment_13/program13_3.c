/*
write a program which accepts number from user and return the count of 
digits in between 3 and 7 
input : 2395
output :1

input : 1018
output :0
*/
#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int icnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
        while (iNo!=0)
    {
        iDigit = iNo % 10;

        if(iDigit>=3 && iDigit<=7)
        {
            icnt++;
        }
        iNo = iNo/10;
    }
        return icnt;
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("enter a number:\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}