#include <stdlib.h>
#include <stdio.h>

int checkIfPerfect(int n);

int main()
{
    int result;
    for (int i = 1; i < 1000; i++)
    {
        result = checkIfPerfect(i);
        if (result == 1)
        {
            printf("%d is perfect", i);
        }
    }
    return 0;
}

int checkIfPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}
