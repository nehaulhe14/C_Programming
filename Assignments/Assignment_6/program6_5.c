/*
accept an employes monthly salary and completed year of service
calculate the bonus using these rules: more than 10 years of
service earns bonus 15% of monthly salary , 5 to 10 years earns
10% ; less than 5 years 5% , salary must be positive and year
of service cannot be negative

input : 30000  12 - bonus = 4500.00
input : 20000  7  - bonus = 2000.00
input : 10000  2 - bonus = 500.00

*/
#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary > 0 && iYears >= 0)
    {
        if (iYears > 10)
        {
            fBonus = fSalary * 0.15f;
        }
        else if (iYears >= 5)
        {
            fBonus = fSalary * 0.10f;
        }
        else
        {
            fBonus = fSalary * 0.05f;
        }

        printf("Bonus = %.2f\n", fBonus);
    }
    else
    {
        printf("Invalid input\n");
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}