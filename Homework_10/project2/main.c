#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void selectionsort(int size,int arr[]);

int main()
{
    int flag, count;
    char array[SIZE];
   // random array
   srand(time(NULL));
    for(int i = 0; i<SIZE; i++){
        array[i] = 'a' + (rand() % 26);
    }
   // sort the array with selection sort
    selectionsort(SIZE, array);
    return 0;
}

void selectionsort(int size,int arr[])
  {
	   int smallest;	   int tempdata;
	   int current;	   int walk;
	   for (int pass = 0; pass < size-1; ++pass) {
	     smallest = pass;
	      for (int walk = pass+1; walk <= size - 1; ++walk) {
	         if (arr[walk] > arr[smallest]) {
	            smallest = walk;   }
	      }

	      tempdata = arr[pass];
                    arr[pass] = arr[smallest];
	      arr[smallest] = tempdata;
	   }
	  return;
  }

