#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_QUESTIONS 100
// for adam salhi for his exam
void fill_table(int *arr1, int *arr2);

int main()
{
    srand(time(0));
    char input1;
    int table1[N_QUESTIONS], table2[N_QUESTIONS];
    int points = 0, answers = 0, input2 = 10, result;
    do
    {
        printf("\nSelect plus (+) or substract (-): ");
        scanf(" %c", &input1);
    } while (input1 != '-' && input1 != '+');

    fill_table(table1, table2);

    for (int i = 0; i < N_QUESTIONS; i++)
    {
        printf("\n%d %c %d = ", table1[i], input1, table2[i]);
        scanf(" %d", &input2);
        if (input1 == '+')
            result = table1[i] + table2[i];
        else
            result = table1[i] - table2[i];

        if (input2 == result)
        {
            points += 10;
            answers++;
        }
    }
    printf("\nRight answers: %d\nYou've got %d points\n", answers, points);
    return 0;
}

void fill_table(int *arr1, int *arr2)
{
    int x, y, k = 0, flag;
    while (k < N_QUESTIONS)
    {
        x = 1 + rand() % 20;
        y = 1 + rand() % 20;
        if (x - y >= 0 && x + y <= 20)
        {
            flag = 0;
            for (int i = 0; i < k; i++)
            {
                if (arr1[i] == x && arr2[i] == y)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                arr1[k] = x;
                arr2[k] = y;
                k++;
            }
        }
    }
}
