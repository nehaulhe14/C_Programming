/*
write a program which accepts number from user display
summation of all non factos
input : 12 
output : 50

input : 10
output :37
*/
#include<stdio.h>
#include<stdlib.h>

int sumfactor(int iNo)
{
    int  icnt = 0;
    
    int iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(icnt = 1 ; icnt<=iNo ; icnt++)
    {
        if(iNo%icnt!=0)
        {
            iSum = iSum + icnt;
        }
    }
        return iSum;

}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("enter a number:\n");
    scanf("%d",&iValue);

    iRet = sumfactor(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}