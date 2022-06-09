#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SOFF 26
#define SIZE 18
#define SOFA 50

void statis(char s[], int sofs, int f[], int soff);

int main()
{
    int i;
    int frq[SOFF] = {0};
    char str[SOFA];

    srand(time(NULL));

    for (i = 0; i < 50; i++)
    {
        str[i] = rand() % 26 + 'a';
        printf("%c ", str[i]);
    }

    printf("\n");
    statis(str, SOFA, frq, SOFF);

    for (i = 0; i < SOFF; i++)
    {
        printf("%c appears %d times.\n", i + 'a', frq[i]);
    }
}

void statis(char s[], int sofs, int f[], int soff)
{
    int i;
  //statistics static
    for (i = 0; i < sofs; i++)
    {
        f[s[i] - 'a']++;
    }
}
