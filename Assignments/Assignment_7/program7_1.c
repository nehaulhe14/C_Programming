/*
write a program which accepts a number from user and print 
that number os * and $ on screen

input: 5
output: $ * $ * $ * $ * $ *

input: 3
output: $ * $ * $ *

input: -3
output : $ * $ * $ *
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("$   *\t");
    }
}


int main()
{
    int iValue=0;

    printf("enter a number\n");
    scanf("%d",&iValue);

    pattern(iValue);
    return EXIT_SUCCESS;
}