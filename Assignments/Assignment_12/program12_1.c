/*
write a program to accept number from user and display its 
digits in revers order

input: 2345
output : 5
         4
         3
         2
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
if(iNo<0)
{
    iNo = -iNo;
}
    int iDigit = 1;
    while(iNo!=0)
    {
        iDigit = iNo%10;
        printf("%d\n",iDigit);
        iNo = iNo/10;

    }
}

int main()
{
    int iValue=0;

    printf("enter a number:\n");
    scanf("%d",&iValue);
    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}
