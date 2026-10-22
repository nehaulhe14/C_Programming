/*
accept 2 no. from user and display first number in second number of times

input : 3  5
output: 3  3  3  3  3

input : 2  3
output: 2  2  2 

input : 5  4
output: 5  5  5  5 
*/


#include<stdio.h>
#include<stdlib.h>
int Display(int iNo, int ifrequency)
{
     int iCnt=0;
    if(ifrequency<0) //updator
    {
        ifrequency= -ifrequency;//updator
    }
    for(iCnt= 1 ; iCnt<=ifrequency; iCnt++)
    {

        printf("%d\n",iNo);
    }
}    
int main()
{
    int iValue=0;
    int iCount =0;

    printf("enter first number:\n");
    scanf("%d",&iValue);

    printf("enter a number:\n");
    scanf("%d",&iCount);

    Display(iValue , iCount);
    return EXIT_SUCCESS;
}