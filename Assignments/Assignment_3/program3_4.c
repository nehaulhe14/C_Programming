/*
accept 1 character from user and convert the case of charecter

input : a  output: A
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayConvart(char Cvalue)
{
    
    if((Cvalue>='a') && (Cvalue<='z') )
    {
        Cvalue= Cvalue -32;
    }
    else if((Cvalue>='A')&&(Cvalue<='Z'))
    {
        Cvalue= Cvalue +32;
    }
    printf("%c\n",Cvalue);
}

int main()
{
    char Cvalue='\0';

    printf("enter a character:\n");
    scanf("%c",&Cvalue);

    DisplayConvart(Cvalue);
    return EXIT_SUCCESS;
}