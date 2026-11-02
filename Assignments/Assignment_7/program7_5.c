/*
write a program which accepts N and print first 5 
multiples of N

input : 4
output :  4 8 12 16 20
*/

#include<stdio.h>
#include<stdlib.h>

void Multipledisplay(int iNo)
{
    int icnt = 0;
    for (icnt=1 ; icnt<=5 ; icnt++)
    {
        printf("%d\t", icnt*iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("enter a number:\n");
    scanf("%d", &iValue);
    Multipledisplay(iValue);
    return EXIT_SUCCESS;
}