/*
input : Marvellous
output : 9(count small letters)
*/
#include<stdio.h>
#include<stdlib.h>
int CountSmall(char *src)
{
    int icnt = 0;

    while(*src!='\0')
    {
        if(*src>='a' && *src<='z')
        {
            icnt++;
        }
        src++;
    }
    return icnt ;
}
int main()
{
    char arr[20];
    int iret = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iret = CountSmall(arr);

    printf("%d",iret);

    return EXIT_SUCCESS;
}