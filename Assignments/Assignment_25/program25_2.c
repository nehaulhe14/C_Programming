/*
input : A
output : true

input : a 
output : False
*/
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;
BOOL CheckCapital(char ch)
{

    
        if((ch>='A' && ch<='Z'))
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

    bret = CheckCapital( cValue);

    if(bret==true)
    {
        printf(" it is capital Character\n");
    }
    else
    {
        printf("it is not a capital Character\n");

    }
    return EXIT_SUCCESS;
}