/*
   CH-230-A
   a4_p9.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
/* The function to find the product of the smallest & largest no. */
int prodminmax (int arr[], int n) {
    int smallest;
    smallest = arr[0];
    int largest;
    largest = arr[1];
    int k;
    
    for (k = 0; k < n; k++) {
        if (arr[k] > largest) {
            largest = arr[k];
        }
        if (arr[k] < smallest) {
            largest = arr[k];
        }
    }
    return smallest * largest;
}
 
int main () {
    int n;
    scanf("%d", &n);
    
    /* Dynamic memory allocation */
    int *arr;
    arr = (int*) malloc(sizeof(int) * n);
    
    if (arr == NULL) {
        exit(1);
    }
    
    int i;
 
    for (i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    
    printf ("Product of the smallest & largest number: %d\n", prodminmax(arr, n));
    
    free(arr);
    return 0;
}