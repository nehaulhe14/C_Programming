/*
display ascii table
*/
#include<stdio.h>
#include<stdlib.h>
void DisplayASCII()
{
    int icnt=0;
    printf("ASCII table :\n");
    for(icnt=0 ; icnt<=255 ; icnt++)
    {
        printf("%d\t%o\t%x\t%c\n",icnt, icnt,icnt,icnt );
    }
    printf("\n");
}
int main()
{
    DisplayASCII();
    return EXIT_SUCCESS;
}