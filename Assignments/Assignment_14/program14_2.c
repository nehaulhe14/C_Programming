/*
write a program which accepts number from user and display its 
factors in revers order
input : 12 
output : 6 4 3 2 1 

input : 13
output :1
*/
#include<stdio.h>
#include<stdlib.h>

int factorRev(int iNo)
{
    int  icnt = 0;
    

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(icnt = iNo/2 ; icnt>=0 ; icnt--)
    {
        if(iNo%icnt==0)
        {
            printf("%d\t",icnt);
        }
    }
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("enter a number:\n");
    scanf("%d",&iValue);

    iRet = factorRev(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}