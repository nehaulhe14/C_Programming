/*
input : 2
output : true

input : a 
output : False
*/
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;
BOOL CheckDigit(char ch)
{

    
        if((ch>='0' && ch<='9'))
        {
            return true;
        
        }
        else
        {
            return false;
        }

}
int main()
{
    char cValue = '\0';
    BOOL bret = false;

    
    printf("Enter a character:\n");
    scanf(" %c",&cValue);

    bret = CheckDigit( cValue);

    if(bret==true)
    {
        printf(" it is  Digit\n");
    }
    else
    {
        printf("it is not a Digit\n");

    }
    return EXIT_SUCCESS;
}