#include <stdio.h>
#include <stdlib.h>
/* HW04:
input (a to f,  or A to F), output (score: 60 to 100)
Otherwise "incorrect input"
*/

int main() // Alae-eddine Hajji 2021521460***
{

    char character;
    // take the input
    printf("Enter a grade (A,B,C,D or F) to give you the score\nGrade: ");
    scanf("%c", &character);

    // display the score (depend on the input)
    switch (character)
    {
    case 'a':
    case 'A':
        printf("The score is between 90 and 100");
        break;
    case 'b':
    case 'B':
        printf("The score is between 80 and 89");
        break;
    case 'c':
    case 'C':
        printf("The score is between 70 and 100");
        break;
    case 'd':
    case 'D':
        printf("The score is between 60 and 100");
        break;
    case 'f':
    case 'F':
        printf("The score is below 60");
        break;
    default:
        printf("incorrect input");
    }
    return 0;
}
