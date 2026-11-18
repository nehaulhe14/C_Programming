/*
a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRows , int iCol)
{
    int i =0;
    int j = 0;
    int icnt = 0;
    char ch = '\0';
    
    
    for(i=1   ; i<=iRows ; i++  )
    {
         
            for(j =1, ch='a',icnt=1 ; j<=iCol ; j++)
        {
             if(i%2==0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",icnt);
                icnt++;
            }
    
            
        }
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