#include <stdlib.h>
#include <stdio.h>

int findGCD(int n1, int n2);
int min(int a, int b);

int main()
{
    int a, b;
    printf("Enter two number: ", a, b);
    scanf("%d %d", &a, &b);
    printf("\nThe Greatest common divisor is %d", findGCD(a, b));
    return 0;
}
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int findGCD(int n1, int n2)
{
    int GCD = 1;
    int i = min(n1, n2);

    while (i > 1)
    {

        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
            return GCD;
        }
        i--;
    }
    return 1;
}
