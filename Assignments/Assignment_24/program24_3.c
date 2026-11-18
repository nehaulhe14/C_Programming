/*
input : " marvellous Multi Os"
           m
output : 0

input : Marvellous Multi OS
        W
output : -1

input : Marvellous Multi os
        e
output : 4
*/
#include<stdio.h>
#include<stdlib.h>


int Lastchar(char *str , char ch)
{
    int iCount = 0;

    while (*str!='\0')
    {
        if(*str == ch)
        {
           return iCount;
        }
        iCount++;
        str++;
        

        
        
    }
    return -1;
    
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

    iret = Firstchar(arr , cValue);

    printf("Character index is %d\n",iret);
    return EXIT_SUCCESS;
}