/*
input : " marvellous Multi Os"
           m
output : 11

input : Marvellous Multi OS
        W
output : -1

input : Marvellous Multi os
        e
output : 4
*/
#include<stdio.h>
#include<stdlib.h>

int Lastchar(char *str, char ch)
{
    int icount = 0;
    int last = -1;

    while(*str != '\0')
    {

        if(*str == ch)
        {
            last = icount;
           
        }
        str++;
        icount++;
    }
    return last;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character \n");
    scanf(" %c",&cValue);

    iRet = Lastchar(arr,cValue);

    printf("Character location  is %d\n",iRet);


    return EXIT_SUCCESS;
}

