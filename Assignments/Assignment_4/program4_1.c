//check whether no. is positive or negative

#include<stdio.h>
#include<stdlib.h>
void CheckNumber(int iValue)
{
    if((iValue>0))
    {
        printf("positive");
    }
    else if(iValue<0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
}
int main()
{
    int iNo=0;

    printf("enter a number\n");
    scanf("%d",&iNo);

    CheckNumber(iNo);
    return EXIT_SUCCESS;
}