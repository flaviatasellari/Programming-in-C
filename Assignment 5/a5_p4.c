/*
   CH-230-A
   a5_p4.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
void divby5 (float arr[], int size);
 
int main () {
    int n;
    scanf ("%d", &n);
    
    float *array;
    /* Dynamic memory allocation */
    array = (float*) malloc (sizeof(float) * n);

    if (array == NULL) {
        exit(1);
    }
 
    /* Getting the input */
    int k;
    for (k = 0; k < n; k++) {
        scanf("%f", &array[k]);
    }
    
    printf ("Before:\n");
    /* The elements before the division*/
    int i = 0;
    while (i < n) {
        printf ("%.3f", array[i]);
        printf (" ");
        i++;
    }
    
    divby5 (array, n); /* Call the function */
    
    printf ("\nAfter:\n");
    /* The elements after the division */
    int j;
    for (j = 0; j < n; j++) {
        printf ("%.3f", array[j]);
        printf (" ");
        
        if (j == n-1) {
            printf ("\n");
        }
    }
    
    free(array);
    return 0;    
}
 
/* The function to divide by 5 the values */
void divby5 (float arr[], int size) {
    int idx;
    for (idx = 0; idx < size; idx++) {
        arr[idx] = arr[idx] / 5.0;
    }
}