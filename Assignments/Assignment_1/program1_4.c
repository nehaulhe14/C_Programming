//accept one number and check it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if(iNo%5==0)
    {
        return TRUE ;
    }
    else 
    {
        return FALSE ;
    }
}

int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("enter a number");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet==TRUE)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return 0;
}