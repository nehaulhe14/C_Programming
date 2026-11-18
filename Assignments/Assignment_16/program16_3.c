/*
A A A A A
B B B B B
C C C C C


*/





#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRows , int iCol)
{
    int i =0;
    int j = 0;
    char ch = '\0';
    ch = 'A';

    for(i= 1  ; i<=iRows ; i++ , ch++ )
    {
        for(j = 1  ; j<=iCol ; j++  )
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