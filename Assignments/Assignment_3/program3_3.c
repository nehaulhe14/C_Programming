/*
accept a no. from user and print its even factors

input: 36
output: 2  6  12  18
*/

#include<stdio.h>
#include<stdlib.h>
void Displayevenfactors(int iNo)
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
    Displayevenfactors(iValue);
    return EXIT_SUCCESS;
}