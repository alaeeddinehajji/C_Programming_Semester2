#include <stdlib.h>
#include <stdio.h>
//Homework 05:
/*Read several integers until meet '-1'       
  Write a program to accept several positive integers from the keyboard until -1 is entered.
  Display the sum of these integers.
  Use any one of the three repetition statements.
  It is your call whether defining a function to carry out this task or not. 
*/
int main () {
    int number, sum = 0;
    printf("This program will sum all integers you entered!\nPlease enter several positive integers and use -1 to stop: \n");

    do{
        scanf("%d", &number);
        if(number == -1)
        break;
        sum += number;
    }while(number != -1);
    printf("The sum is %d", sum);

    return 0;
}
