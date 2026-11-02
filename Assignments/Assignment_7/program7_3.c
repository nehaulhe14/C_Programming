/*
write a program to accept a number from user and print its 
number line .

input: 5
output: -1 -2 -3 -4 -5 0 1 2 3 4 5 
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int icnt = 0;
    for (icnt=-iNo; icnt <= iNo; icnt++)
    {
        printf("%d\t",icnt);
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter a number:\n");
    scanf("%d", &iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}