#include <stdio.h>

/*/        inch to centimeters
/Write a program to convert inches into centimeters. (one inch is 2.54 centimeters.)
/Then write a program that prompts the user to input a measure in inches,
/calls the conversion function,
/and prints out the measurement in centimeters.
/*/
float inch2cm(float n);

int main(){
    float num = 0 ;
    printf("Enter a number (inches) to convert it to (cm): ");
    scanf("%f", &num);
    printf("Your measure is %.2f cm (%.2f inches)\n\n", inch2cm(num), num);
    return 0;
}
 float inch2cm(float n){
    return n *= 2.54;
 }
