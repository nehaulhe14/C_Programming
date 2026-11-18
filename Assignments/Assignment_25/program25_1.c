/*
input : f 
output : true

input : @ 
output : False
*/
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;
BOOL CheckAlpha(char ch)
{

    
        if(ch>='A' && ch>='Z' || ch>='a' && ch>='z' )
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

    bret = CheckAlpha( cValue);

    if(bret==true)
    {
        printf(" it is Character\n");
    }
    else
    {
        printf("it is not a Character\n");

    }
    return EXIT_SUCCESS;
}