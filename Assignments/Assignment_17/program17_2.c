/*
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRows , int iCol)
{
    int i =0;
    int j = 0;
    int icnt = 0;
    
    

    for(i=1  ; i<=iRows ; i++  )
    {
         if(i%2==0)
              {
                icnt = 1;
              }
              else
              { 
                icnt = 2;
              }
        
        
        for(j = 1  ; j<=iCol ; j++)
        {
            printf("%d\t",icnt);
            icnt= icnt+2;
        
             
            
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