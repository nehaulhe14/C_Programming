//find greater of two numbers

#include<stdio.h>
#include<stdlib.h>

void Findgreater(int iFirst , int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("greater no %d\n",iFirst);
    }
    else if(iFirst<iSecond)
    {
        printf("is greater %d\n",iSecond);
    }
    else
    {
        printf("is equal\n");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter two numbers:\n");
    scanf("%d %d",&iValue1 , &iValue2);

    Findgreater(iValue1 , iValue2);
    return EXIT_SUCCESS;
}