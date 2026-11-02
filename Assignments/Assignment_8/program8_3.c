/*
find factorial of number
input : 5
output : 120 (5*4*3*2*1*)

input : -5
output : 120 (5*4*3*2*1*)


input : 4
output : 24 (4*3*2*1*)
*/

#include<stdio.h>
#include<stdlib.h>
void Factorial(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int icnt = 0;
    int i = 1;
    for(icnt = 1; icnt<=iNo ; icnt++)
    {
        i = i * icnt;
        
    }
        printf(" %d\n",i);
    
}

int main()
{
    int iValue = 0;
    printf("enter a number:\n");
    scanf("%d", &iValue);
    Factorial(iValue);
return EXIT_SUCCESS;
}