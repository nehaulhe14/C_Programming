//check divisible by 5

#include<stdio.h>
#include<stdlib.h>


void Checkdivisibility(int iNo)
{
    if(iNo%5==0)
    {
        printf("divisible by 5\n");

    }
    else 
    {
        printf("not divisible by 5\n");

    }
}

int main()
{
    int iValue =0;


    printf("enter a number\n");
    scanf("%d",&iValue);

    Checkdivisibility(iValue);

    
    return EXIT_SUCCESS;
}