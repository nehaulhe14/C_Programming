/*
write a program which accepts number from user and 
return difference btw summation of all its factors and 
nan factors
input : 12 
output : -34 (16 - 50)

input : 10
output :-29 (8 - 37)
*/
#include<stdio.h>
#include<stdlib.h>

int Factdiff(int iNo)
{
    int  icnt = 0;
    
    int iSum = 0;

int iFactors = 0;
int iNonfactors = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(icnt = 1 ; icnt<iNo ; icnt++)
    {
        if(iNo%icnt==0)
        {
            iFactors = iFactors + icnt;
        }
        else
        {
            iNonfactors = iNonfactors + icnt;
        }
        
    }
        return iFactors - iNonfactors;

}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("enter a number:\n");
    scanf("%d",&iValue);

    iRet = Factdiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}