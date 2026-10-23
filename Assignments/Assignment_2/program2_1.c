//accept one number from user and print that number of * on screen

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt=0;

    iCnt=1;
    while(iCnt<=iNo)
    {
        printf("*\n");
        iCnt++;
    }
}

int main()
{
    int iValue=0;

    printf("enter a number:\n");
    scanf("%d",&iValue);
    Display(iValue);

    return EXIT_SUCCESS;
}