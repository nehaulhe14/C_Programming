/*
accept the total purches amount and calculate the final payable 
amount after applying the following discount negative amound
should invalid

purches amount          discount
-----------------------------------------
below rs 1000             0%
rs 1000 to below 5000     10%
rs 5000 and above         20%
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid amount\n");
    }
    else
    {
        if (fAmount >= 5000)
        {
            fDiscount = fAmount * 0.20f;
        }
        else if (fAmount >= 1000)
        {
            fDiscount = fAmount * 0.10f;
        }

        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}