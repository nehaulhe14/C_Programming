/*
 input : 5
 output : A B C D E

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRows )
{
    int i =0;
    char ch = '\0';    
    
    for(i=1 , ch = 'A'  ; i<=iRows ; i++   )
    {
      printf("%c\t",ch);
      ch++;
          
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