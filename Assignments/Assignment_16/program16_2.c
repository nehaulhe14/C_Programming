/*
A B C D
a b c d
A B C D
a b c d

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
        if(i%2==0)
        {
            ch = 'a';
        }
        else
        {
            ch = 'A';
        }
        for(j = 1 ; j<=iCol ; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n\n");

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