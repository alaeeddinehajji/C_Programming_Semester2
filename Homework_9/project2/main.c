#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void seqsearch(char character, char a[], int size);

int main()
{
    int minPosition;
    char array[SIZE], temp;
   // random array
   srand(time(NULL));
    for(int i = 0; i<SIZE; i++){
        array[i] = 'a' + (rand() % 26);
    }
   // search for a character "x"
   seqsearch('x', array, SIZE);

   // sort array
for(int i = 0; i<SIZE; i++) {
     for(int j = 0; j<SIZE - 1 ; j++){
        if(array[j] > array[j+1]){
                temp = array[j+1];
                array[j+1] = array[j] ;
                array[j] = temp;
        }
     }
  }
    // output the result
    printf("\nsorted array:\n");
    for(int i = 0 ; i < SIZE ; i++)
        printf("\narray[%d] = %c", i , array[i]);

    return 0;
}

void seqsearch(char character, char a[], int size){
    unsigned int flag = 0;
    for(int i = 0; i< size; i++){
            if( a[i] == character)
            flag =  1;
    if(flag == 1)
        break;
    }

    if(flag == 1)
        printf("the character \'%c\' founded in the array", character);
    else
        printf("the array not contain the character \'%c\' ", character);
}







