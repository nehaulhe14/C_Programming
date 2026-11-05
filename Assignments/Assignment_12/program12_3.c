/*
write a program which accepts number from user and count frequency 
of 2
input : 2395
output :1

input : 6395
output :0

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

        if(iDigit==2)
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