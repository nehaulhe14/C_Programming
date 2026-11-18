/*
 input : 8
 output : 2 4 6 8 10 12 14 16

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo )
{
    int i =0;
    
    for(i=2  ; i<=iNo*2 ; i+=2   )
    {
      printf("%d\t",i);
      
          
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