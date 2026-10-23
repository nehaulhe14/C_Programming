// check voting eligibility

#include<stdio.h>
#include<stdlib.h>

void Checkvotingeligibility(int iage)
{
    if(iage<0)
    {
        printf("Invalid age");

    }
    else if(iage>=18)
    {
        printf(" eligible for voting");
    }
    else
    {
        printf("not eligible for voting");
 
    }
}

int main()
{
    int iAge=0;
    printf("enter your age:\n");
    scanf("%d",&iAge);

    Checkvotingeligibility(iAge);
    return EXIT_SUCCESS;
}