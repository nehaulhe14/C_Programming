//accept 1 number from usre and if the no. is less than 10 then
//print hello otherwise print demo

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("hello");

    }
    else
    {
        printf("demo");
    }
}
int main()
{
    int iValue=0;

    printf("enter a number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}