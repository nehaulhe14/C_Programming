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


int Countchar(char *str , char ch)
{
    int iCount = 0;

    while (*str!='\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;

        
        
    }
    return iCount;
    
    
}
int main()
{
    char arr[20];
    char cValue = '\0';
    int iret = 0;

    printf("enter a string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter a character:\n");
    scanf(" %c",&cValue);

    iret = Countchar(arr , cValue);

    printf("Character frequency is %d\n",iret);
    return EXIT_SUCCESS;
}