/*
write a program which accepts number from user and return multiplication
of all digits 
input : 2395
output :270

input : 1018
output :8
*/
#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iMul = 1;
    int iDigit = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
        while(iNo>0)
        {
            iDigit = iNo % 10;
            iMul = iMul * iDigit;
            
            iNo = iNo / 10;
        }
        return iMul;
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