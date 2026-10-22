/*
write a program to accept a number from user and print even factors
of that number 

input: 24
output: 1 2 4 6 8 12 
*/

#include<stdio.h>
#include<stdlib.h>
void Displayfactors(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo= -iNo;
    }
    for(i=1 ; i<=iNo ; i++)
    {
        if((iNo % i==0) && (i%2==0))
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue=0;

    printf("enter a number\n");
    scanf("%d",&iValue);
    Displayfactors(iValue);
    return EXIT_SUCCESS;
}