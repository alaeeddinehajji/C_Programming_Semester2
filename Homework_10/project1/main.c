#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30

int main()
{
    int flag, count;
    char array[SIZE];
   // random array
   srand(time(NULL));
    for(int i = 0; i<SIZE; i++){
        array[i] = 'a' + (rand() % 26);
    }
   // search for a character "x"
    count = 0;
    flag = 0;
    for(int i = 0; i< SIZE; i++){
            if( array[i] == 'x'){
                 flag =  1;
                 count++;
            }
    }
      // output the result
    if(flag == 1)
        printf("the character 'x' founded %d times in the array\n", count);
    else
        printf("the array not contain the character 'x' \n");

    return 0;
}





