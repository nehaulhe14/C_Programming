/*
accept a range from user and print all even numbers in btw
range
input : 23 35
output : 24 26 28 30 32 34
*/

#include<stdio.h>
#include<stdlib.h>

int RangeDisplayEven(int iNo1 , int iNo2)
{
    int icnt =0;
        if (iNo1 > iNo2)
        {
            printf("invalid range\n");
        }
        for(icnt = iNo1 ; icnt<=iNo2 ; icnt++)
        {
            if(icnt%2==0)
            {
                printf("%d\t",icnt);
            }
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


 RangeDisplayEven(iValue1 , iValue2);


    return EXIT_SUCCESS;
}