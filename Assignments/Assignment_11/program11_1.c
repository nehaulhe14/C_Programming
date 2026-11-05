/*
accept a range from user and accept all numbers in btw
range
input : 23 35
output : 23 24 25 26 27 28 29 30 31 32 33 34 35 
*/

#include<stdio.h>
#include<stdlib.h>

int RangeDisplay(int iNo1 , int iNo2)
{
    int icnt =0;
    for (icnt=iNo1 ; icnt<=iNo2 ; icnt++)
    {
        printf("%d\n",icnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first range\n");
    scanf("%d",&iValue1);

    printf("Enter second range\n");
    scanf("%d",&iValue2);

        printf("range is :\n");


 RangeDisplay(iValue1 , iValue2);


    return EXIT_SUCCESS;
}