/*
input : MarvellouS
output : 6(8-2)
*/
#include<stdio.h>
#include<stdlib.h>
int CountSmall(char *src)
{
    int icnt = 0;
    int iBig = 0;
    int iSmall = 0;

    while(*src!='\0')
    {
        if(*src>='A' && *src<='Z')
        {
            iBig++;
        }
        else if(*src>='a' && *src<='z')
        {
            iSmall++;
        }
        src++;
    }
    return iSmall - iBig ;
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