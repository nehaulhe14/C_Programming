//check leap year

#include<stdio.h>
#include<stdlib.h>

void Checkleapyear(int iYear)
{
    if(iYear<0)
    {
        printf("invalid year");
    }
    else if(iYear%4==0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf("not a leap year");
    }

}

int main()
{
    int year=0;
    printf("enter a year\n");
    scanf("%d",&year);

    Checkleapyear(year);
    return EXIT_SUCCESS;
}