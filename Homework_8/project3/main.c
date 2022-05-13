#include <stdlib.h>
#include <stdio.h>
#include<math.h>
void caldeposit(float p, float y, float r);

int main()
{
    float years;
    float principal , rate;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter years and interest rate: ");
    scanf("%f %f", &years, &rate);
    caldeposit(principal, years, rate);
    return 0;
}

void caldeposit(float p, float y, float r)
{
    float deposit = p;

    printf("\n\nInterest Rate: %.3f ", r);
    printf("\nYear\tAmount on deposit");

    for (int i = 1 ; i <= y; i++)
    {
        deposit = p * pow((1+r), i);
        printf("\n %d \t\t %.2f", i, deposit);
    }
}
