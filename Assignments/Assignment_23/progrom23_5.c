/*
input : "Marvellous info"
output : 1
*/
#include<stdio.h>
#include<stdlib.h>

int Countwhitespace(char *str)
{
    int iCount = 0;
    while(*str!='\0')
    {
        if(*str==' ')
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
    int iret = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iret=Countwhitespace(arr);

    printf("white spaces are:%d\n",iret);
    return EXIT_SUCCESS;
}