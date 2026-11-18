/*
input : A (Division)
output : 7 AM (exam time)

input : B (Division)
output : 8.30 AM (exam time)

input : C (Division)
output : 9.20 AM (exam time)

input : D (Division)
output : 10.30 AM (exam time)
*/
#include<stdio.h>
#include<stdlib.h>


void DisplaySchedule(char chDiv)
{
     if(chDiv=='A')
     {
        printf("your exam time is 7 AM");
     }
     
     else if (chDiv=='B')
     {
        printf("your exam time is 8.30 AM\n");
     }
     else if (chDiv=='C')
     {
        printf("your exam time is 9.20 AM\n");
     }
     else if (chDiv=='D')
     {
        printf("your exam time is 10.30 AM\n");
     }
     else
     {
        printf("Invalid division\n");
     }
    
}
int main()
{
    char cValue = '\0';

    
    printf("Enter a Division:\n");
    scanf(" %c",&cValue);

    DisplaySchedule( cValue);

    
    return EXIT_SUCCESS;
}