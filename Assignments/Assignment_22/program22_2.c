/*
 input : 5
 output : 5 # 4  # 3 # 2 # 1 #

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRows )
{
    int i =0;
    
    for(i=iRows  ; i>=1 ; i--   )
    {
      printf("%d\t#\t",i);
      
          
    }
    printf("\n");

}
int main()
{
    int iValue1 = 0;
    
    printf("enter number:\n");
    scanf("%d",&iValue1);

    

    Pattern(iValue1);
    
    return EXIT_SUCCESS;
}