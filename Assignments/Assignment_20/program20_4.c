/*
 * * * * * *
 * # # # * *
 * # # * $ *
 * # * $ $ *
 * * $ $ $ *
 * * * * * * 

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRows , int iCol)
{
    int i =0;
    int j = 0;
    
    
    for(i=1  ; i<=iRows ; i++   )
    {
    
            for(j =1   ; j<=iCol ; j++)
        {
            
            if(i+j==iRows+1 || i==1 || i==iRows || j==1 || j==iCol )
            {
                printf("*\t");
            }
            
            else if(i+j<iRows+1)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");

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