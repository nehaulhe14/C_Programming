/*
input : A
output : decimal : 65
         octal : 1010
         hexadecimal : 0X41


*/
#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{

    
        if((ch>='A' && ch<='Z'))
        {
            printf("Decimal:%d\n",ch);
            printf("Octal:%o\n",ch);
            printf("Decimal:%x\n",ch);


        
        }
        else
        {
           printf("invalid\n"); 
        }

}
int main()
{
    char cValue = '\0';

    
    printf("Enter a character:\n");
    scanf(" %c",&cValue);

     Display( cValue);

    
    return EXIT_SUCCESS;
}