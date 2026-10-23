//find greatest of 3 numbers
#include<stdio.h>
#include<stdlib.h>

void Findgreater(int iFirst , int iSecond , int iThird)
{
    if(iFirst>iSecond &&  iFirst>iThird)
    {
        printf("greater no %d\n",iFirst);
    }
    else if(iSecond>iFirst && iSecond> iThird)
    {
        printf("is greater %d\n",iSecond);
    }
    else if(iThird>iFirst && iThird > iSecond)
    {
        printf("is greater %d\n",iThird);
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
    int iValue3=0;
    printf("enter three numbers:\n");
    scanf("%d %d %d",&iValue1 , &iValue2 , &iValue3);

    Findgreater(iValue1 , iValue2 , iValue3);
    return EXIT_SUCCESS;
}