/*
write a program which accepts number from user display
multiplication of all factos
input : 12 
output : 144 

input : 13
output :1
*/
#include<stdio.h>
#include<stdlib.h>

int Mulfactor(int iNo)
{
    int  icnt = 0;
    
    int iMul = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(icnt = 1 ; icnt<=iNo/2 ; icnt++)
    {
        if(iNo%icnt==0)
        {
            iMul = iMul * icnt;
        }
    }
       return iMul;     
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("enter a number:\n");
    scanf("%d",&iValue);

    iRet = Mulfactor(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}