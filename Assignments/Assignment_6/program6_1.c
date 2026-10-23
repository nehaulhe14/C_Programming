/*
calculate the electricity bill
unit consumed        rate
first 100 units      rs 5 
next 100 units       rs 7
above 200            rs 10

*/
#include<stdio.h>
#include<stdlib.h>

void Calculatebill(int iUnits)
{
    float iBill=0.0f;

    if(iUnits<=100)
    {
        iBill= iUnits*5;
        printf("%f\n",iBill);
    }
    else if(iUnits<=200)
    {
        iBill = (100*5)+(iUnits-100)*7;
        printf("%f\n",iBill);
    } 
    else
    {
        iBill = (100*5)+(100*7) + (iUnits-200)*10;
        printf("%f\n",iBill);


    }
}

int main()
{
    int iunits=0;
    printf("enter consumed units:\n");
    scanf("%d",&iunits);

    Calculatebill(iunits);
    return EXIT_SUCCESS;
}