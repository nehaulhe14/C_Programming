/*
input : " marvellous info"
           e
output : true

input : Marvellous Multi os
        w
output : False
*/
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;
BOOL Checkchar(char *str , char ch)
{

    while (*str!='\0')
    {
        if(*str == ch)
        {
            return true;
        
            
        }
        str++;

        
        
    }
    
    
    
}
int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bret = false;

    printf("enter a string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter a character:\n");
    scanf(" %c",&cValue);

    bret = Checkchar(arr , cValue);

    if(bret==true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");

    }
    return EXIT_SUCCESS;
}