/*
write a program to accept number from user and check whether 
it contains zero or not

input: 2089
output : there is zero
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define true 1
#define false 0
typedef int BOOL;
BOOL checkzero(int iNo)
{
    int iDigit = 0;
    while (iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit==0)
        {
            return true;
        }
        iNo= iNo/10;
    }
    return false;
}

int main()
{
    int iValue=0;
    BOOL bRet = 0;

    printf("enter a number:\n");
    scanf("%d",&iValue);
    bRet=checkzero(iValue);
    if(bRet==true)
    {
        printf("it contains zero\n");
    }
    else
    {
        printf("it do not contain zero\n");
    }

    

    return EXIT_SUCCESS;
}
