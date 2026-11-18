/*
input : Q
output :Q R S T U V W X Y Z

input : m
output :m l k j i h g f e d c b a 


*/
#include<stdio.h>
#include<stdlib.h>
void Display(char ch)
{
    char ch1 = '\0';
        if(ch>='A' && ch<='Z')
        {
          for(ch1=ch ; ch1<='Z' ; ch1++)
          {
            printf("%c\t",ch1);
          }
        }
        else if(ch>='a' && ch<='z')
        {
          for(ch1=ch ; ch1>='a' ; ch1--)
          {
            printf("%c\t",ch1);
          }
        }
        
    
}
int main()
{
    char cValue= '\0';

    printf("enter the character:\n");
    scanf("%c", &cValue);

    Display(cValue);
    return EXIT_SUCCESS;
}