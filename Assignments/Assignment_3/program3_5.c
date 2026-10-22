//except a charcter from user and check whether it is vowel or not

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Checkvowel(char Cvalue)
{
    if((Cvalue='a','e','i','o','u')||(Cvalue='A','E','I','O','U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cvalue ='\0';
    BOOL bRet=FALSE;

    printf("enter a charcter:\n");
    scanf("%c",&cvalue);

    bRet= Checkvowel(cvalue);

    if(bRet==TRUE)
    {
        printf("it is a vowel");
    }
    else
    {
         printf("it is not a vowel");

    }
    return EXIT_SUCCESS;
} 
