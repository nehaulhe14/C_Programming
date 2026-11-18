/*
A B C D
A B C D
A B C D
A B C D

*/





#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRows , int iCol)
{
    int i =0;
    int j = 0;
    char ch = '\0';

    for(i= 1 ; i<=iRows ; i++)
    {
        for(j = 1 , ch='A' ; j<=iCol ; j++ , ch++)
        printf("%c\t",ch);
        printf("\n");
        

    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("enter rows:\n");
    scanf("%d",&iValue1);

    printf("enter columns:\n");
    scanf("%d",&iValue2);


    Pattern(iValue1 , iValue2);
    
    return EXIT_SUCCESS;
}