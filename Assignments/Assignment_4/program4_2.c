//check even or odd

#include<stdio.h>
#include<stdlib.h>
void Checkevenodd(int iValue)
{
    if(iValue%2==0)
    {
        printf("even number\n");
    }
    else
    {
        printf("odd number\n");
    }
}

int main()
{
    int iNo=0;

    printf("enter a number\n");
    scanf("%d",&iNo);

    Checkevenodd(iNo);
    return EXIT_SUCCESS;
}