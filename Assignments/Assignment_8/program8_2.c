/*
accept single digit number from user and print it into words

input : 9
output : nine

input : -3
output : three

input : 12
output : invalid input 
*/

#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }

    switch (iNo)
    {
        case 1 :
        printf("One");
        break;

        case 2 :
        printf("Two");
        break;

        case 3 :
        printf("Three");
        break;

        case 4 :
        printf("Four");
        break;

        case 5 :
        printf("five");
        break;

        case 6 :
        printf("Six");
        break;

        case 7 :
        printf("Seven");
        break;

        case 8 :
        printf("Eight");
        break;

        case 9 :
        printf("Nine");
        break;

        case 10 :
        printf("Ten");
        break;

        default:
        printf("invalid input");
    }
}



int main()
{
    int iValue = 0;
    printf("enter a number:\n");
    scanf("%d", &iValue);
    Display(iValue);
return EXIT_SUCCESS;
}