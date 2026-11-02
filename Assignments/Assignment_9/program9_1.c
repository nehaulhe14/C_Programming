/*
accept number and display patterns
input : 5
output : * * * * * # # # # #


*/

#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int icnt = 0;
    for(icnt = 0; icnt<=iNo ; icnt++)
    {
         printf("*\t");


    }
    for(icnt = 0; icnt<=iNo ; icnt++)
    {
         printf("#\t");


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