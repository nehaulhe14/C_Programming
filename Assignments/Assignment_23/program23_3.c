/*
input : "Marvellous Multi OS"
output : "mARVELLOUS mULTI os"
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
        if(*str>='A' && *str<='Z')
        {
          *str = *str + 32;
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