/*
write a program which accepts one number from user and print that number
of even numbers on screen

input: 7
output: 2 4 6 8 10 12 14 

manjhe jevda number user kadun ghu tevde even numbers print zale pahije 
*/
#include<stdio.h>
#include<stdlib.h>
void Printeven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int iCnt=0;
    for(iCnt = 1; iCnt<=iNo ; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}


int main()
{
    int iValue=0;

    printf("enter a number\n");
    scanf("%d",&iValue);
    Printeven(iValue);
    return EXIT_SUCCESS;
}