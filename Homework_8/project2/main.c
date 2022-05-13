#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int flipCoin();

int main()
{

    int tailCount = 0, headCount = 0;

    for (int i = 0; i < 100; ++i)
    {
        if (i % 10 == 0)
            printf("\n");

        int coinFace = flipCoin();

        if (coinFace == 0)
            headCount++;
        else
            tailCount++;
    }
    printf("\n\nThe total number of heads was %d", headCount);
    printf("\nThe total number of tails was %d", tailCount);
    return 0;
}

int flipCoin()
{
    // srand( time (NULL));   // when I add this code, i get Tails 100%
    int flip = rand() % 2;

    if (flip == 0)
        printf(" Tail ");
    else
        printf(" Head ");

    return flip;
}
