#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a;
    int b;
    // HW02:
    // Write a program that extracts and prints the rightmost digit
    // of the integral portion of a float. E.g. input 12.5, then output 2
    // 2021521460130_2
    printf("Hi! This program extract and prints the right most digit of the integral portion of a float\nInput an a float number:  ");
    scanf("%f", &a);
    b = (int)a % 10;

    printf("\nThe right most digit of the integral portion of %0.2f is %d\n", a, b);

    return 0;
}
