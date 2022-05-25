#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

void seqsearch(char character, char a[], int size);

int main()
{
    int minPosition, array[SIZE], temp;
   // random array
   srand(time(NULL));
    for(int i = 0; i<SIZE; i++){
        array[i] = rand() % 10;
    }
    //array original print
     printf("\nsorted array:\n");
    for(int i = 0 ; i < SIZE ; i++)
        printf("\narray[%d] = %d", i , array[i]);

   // swap array
for(int i = 0; i< (SIZE/2); i++) {
        //if(array[j] > array[j+1]){
                temp = array[ (SIZE - 1 ) - i];
                array[( SIZE - 1 ) - i] = array[i] ;
                array[i] = temp;


  }
    // output the result
    printf("\nswaped array:\n");
    for(int i = 0 ; i < SIZE ; i++)
        printf("\narray[%d] = %d", i , array[i]);

    return 0;
}





