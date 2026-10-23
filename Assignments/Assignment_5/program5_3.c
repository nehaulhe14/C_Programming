// calculate grades of student

#include<stdio.h>
#include<stdlib.h>

void Displaygrade(float fmarks)
{
    if((fmarks>=90) && (fmarks<=100))
    {
        printf("A grade");
    }
    else if((fmarks>=75) && (fmarks<=89))
    {
        printf("B grade");
    }
    else if((fmarks>=60) && (fmarks<=70))
    {
        printf("C grade");
    }
    else if((fmarks>=40) && (fmarks<=59))
    {
        printf("D grade");
    }
    else
    {
        printf("fail");
    }
}

int main()
{
    float fMarks=0.0f;
    printf("enter marks\n");
    scanf("%f",&fMarks);

    Displaygrade(fMarks);
    return EXIT_SUCCESS;
}