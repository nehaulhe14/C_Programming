/*
input : marvellous
output : true (check vowels)

input : xyz 
output : False
*/
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;
BOOL Checkvowel(char *src)
{
    while(*src!='\0')
    {
            if(*src=='a'|| *src=='e'|| *src=='i'|| *src=='o'|| *src=='u'|| 
        *src=='A'|| *src=='E'||*src=='I'|| *src=='O'|| *src=='U')
        {
            return true;
        }
        else
        {
            return false;
        }
        src++;
    }
    
        

}
int main()
{
    char arr[20];
    BOOL bret = false;

    
    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    bret = Checkvowel(arr);

    if(bret==true)
    {
        printf(" it is has a vowel\n");
    }
    else
    {
        printf("it is do not have a vowel\n");

    }
    return EXIT_SUCCESS;
}