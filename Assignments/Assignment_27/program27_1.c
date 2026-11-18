/*
input : Marvellous Multi OS
output : 4(count capital letters)
*/
#include<stdio.h>
#include<stdlib.h>
int Countcapital(char *src)
{
    int icnt = 0;

    while(*src!='\0')
    {
        if(*src>='A' && *src<='Z')
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

    iret = Countcapital(arr);

    printf("%d",iret);

    return EXIT_SUCCESS;
}