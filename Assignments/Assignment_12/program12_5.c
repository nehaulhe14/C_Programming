/*
write a program which accepts number from user and count frequency of 
such digit which is less than 6
input : 2395
output :3

input : 6395
output : 2

*/
#include<stdio.h>
#include<stdlib.h>

void CountTwo(int iNo)
{
    int iDigit = 0;
    int icnt = 0;

    while (iNo!=0)
    {
        iDigit = iNo % 10;

        if(iDigit<6)
        {
            icnt++;
        }
        iNo = iNo/10;
    }
    printf("%d\n", icnt);
    
}
int main()
{
    int iValue=0;

    printf("enter a number:\n");
    scanf("%d",&iValue);
    CountTwo(iValue);
    return EXIT_SUCCESS;
}