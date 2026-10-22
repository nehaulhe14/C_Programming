/*
input:A - upper case
input:a - lower case
inpur:7 - Digit
input:@ - special character
*/
#include<stdio.h>
#include<stdlib.h>

void Checkcharactertype(char cvalue)
{
    if((cvalue>='a')&&(cvalue<='z'))
    {
        printf("lowercase");
    }
    else if((cvalue>='A')&&(cvalue<='Z'))
    {
        printf("uppercase");
    }
    else if((cvalue>='0')&&(cvalue<='9'))
    {
        printf("Digit");
    }
    else
    {
         printf("Special character");

    }
    
}

int main()
{
    char cvalue='\0';

    printf("enter a character:\n");
    scanf("%c",&cvalue);
    Checkcharactertype(cvalue);
    return EXIT_SUCCESS;
}