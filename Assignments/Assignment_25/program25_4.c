/*
input : a
output : true

input : A
output : False
*/
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;
BOOL CheckSmall(char ch)
{

    
        if((ch>='a' && ch<='z'))
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

    bret = CheckSmall( cValue);

    if(bret==true)
    {
        printf(" it is  small character\n");
    }
    else
    {
        printf("it is not a small character\n");

    }
    return EXIT_SUCCESS;
}