/*
accept number from user and display its table
input : 2
output : 2 4 6 8 10 12 14 16 18 20


*/

#include<stdio.h>
#include<stdlib.h>
void Table(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int icnt = 0;
    for(icnt = 1; icnt<=10 ; icnt++)
    {
         printf(" %d\n",icnt*iNo);

    }
    
}

int main()
{
    int iValue = 0;
    printf("enter a number:\n");
    scanf("%d", &iValue);
    Table(iValue);
return EXIT_SUCCESS;
}