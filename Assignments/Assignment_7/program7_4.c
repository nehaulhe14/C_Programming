/*
write a program which accepts N number from user and print 
all odd numbers upto N

input : 18
output : 1 3 5 7 9 11 13
*/

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int icnt = 0;

    
        for(icnt=1 ; icnt<=iNo ; icnt++)
        {
            if((icnt%2)!=0)
            {
                printf("%d\t",icnt);
            }
            
        }
    
    
}

int main()
{

    int iValue = 0;
    printf("enter a number:\n");
    scanf("%d", &iValue);
    OddDisplay(iValue);
    return EXIT_SUCCESS;
}