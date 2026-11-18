/*
input : "marvellous multi os"
output : "Marvellous Multi OS"
*/
#include<stdio.h>
#include<stdlib.h>

void Strlwrx(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
          *str = *str - 32;
        }
        str++;
    }
}


int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Strlwrx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}