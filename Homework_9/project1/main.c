#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void bubblesort(double a[] , int size);

int main()
{
    double array[SIZE];
    for(int i = 0; i<SIZE; i++){
        array[i] = rand() % 10;
    }
     printf("\nOriginal Array:");
  for(int i = 0; i<SIZE; i++){
    printf("\narray[%d] = %.2lf", i, array[i]);
  }
    bubblesort(array,SIZE);
    return 0;
}

void bubblesort(double a[], int size){
  for(int i = 0; i<size; i++) {
     for(int j = 0; j<size - 1 ; j++){
        if(a[j] > a[j+1]){
            a[j] += a[j+1] ;
            a[j+1] = a[j] - a[j+1];
            a[j] -= a[j+1];
        }
     }
  }
  printf("\n\nthe array sorted by bubblesort() :");
  for(int i = 0; i<size; i++){
    printf("\narray[%d] = %.2lf", i, a[i]);
  }

}







