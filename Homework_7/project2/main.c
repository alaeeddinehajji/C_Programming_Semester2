 
#include <stdio.h>
#include <stdlib.h>

//  Notice! All the programs work one by one

double inch2cm(float n); // function to convert inch to cm

int nearestInt(float n); // function to give the nearest integer *

float difference(float n1, float n22); // function calculate the difference between two numbers.
float product(float n1, float n2);     // function calculate the product of two numbers.
float quotient(float n1, float n2);    // function calculate the moduquotient of two numbers.
float modulus(float n1, float n2);     // function calcluate the modulus of two numbers

int main()
{
    float num1 = 0, num2 = 0;

    // code for exercise 1 "convert from inch to cm"
    printf("Program 1: \n ");
    printf("Enter a number (inches) to convert it to (cm): ");
    scanf("%f", &num1);
    printf("Your measure is %.2f cm (%.2f inches)\n\n", inch2cm(num1), num1);

    // code for exercise 2 "Calculate product, quotient, modulus and differece"
    printf("\n\nProgram 2:\n");
    printf("=========================================================================================\n");
    printf("|\tCalculator for difference, productn, quotient, and modulus of two numbers\t|\n|\tEnter Two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("________________________________________\n|\t\t\t\t\t|\n");
    printf("|\tResults of '%.2f' and '%.2f':\t|\n", num1, num2);
    printf("|\tThe difference: %.2lf\t\t|\n|\tThe product: %.2lf\t\t|\n", difference(num1, num2), product(num1, num2));
    printf("|\tThe quotient: %.2lf\t\t|\n|\tThe modulus: %.2lf\t\t|", quotient(num1, num2), modulus(num1, num2));
    printf("\n========================================\n");

    // code for exercise 3  "give the nearest integer"
    printf("\n\nProgram 3:\n");
    printf("Enter a number to give you the nearest integer: ");
    scanf("%f", &num1);
    printf("The nearest integere for '%.2f' is %d", num1, nearestInt(num1));

    return 0;
}

double inch2cm(float n)
{
    return (double)(n *= 2.54);
} // function convert inch to cm

int nearestInt(float n)
{
    n += 0.5;
    return (int)n;
}

float difference(float n1, float n2)
{
    return n1 - n2;
}
float product(float n1, float n2)
{
    return n1 * n2;
}
float quotient(float n1, float n2)
{
    if (n2 != 0)
        return n1 / n2;
    else
        return 0;
}

float modulus(float n1, float n2)
{
    int number1 = (int)n1;
    int number2 = (int)n2;

    return (float)(number1 % number2);
}
