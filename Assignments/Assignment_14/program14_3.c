/*
write a program which accepts number from user and display its 
all its non factors
input : 12 
output : 5 7 8 9 10 11 

input : 13
output :2 3 4 5 6 7 8 9 10 11 12
*/
#include<stdio.h>
#include<stdlib.h>

void nonFactors(int iNo)
{
    int  icnt = 0;
    

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(icnt = 1 ; icnt<=iNo ; icnt++)
    {
        if(iNo%icnt!=0)
        {
            printf("%d\t",icnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("enter a number:\n");
    scanf("%d",&iValue);

    nonFactors(iValue);


    return EXIT_SUCCESS;
}