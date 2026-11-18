/*
input : marve14llous10
output : 1410
*/
#include<stdio.h>
#include<stdlib.h>

void Displaydigit(char *str)
{
    while(*str!='\0')
    {
        if(*str>='0' && *str<='9')
        {
          printf("%c",*str);
        }
        str++;
    }
}


int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Displaydigit(arr);


    return EXIT_SUCCESS;
}