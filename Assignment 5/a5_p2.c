/*
   CH-230-A
   a5_p2.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
void divby5 (float arr[], int size);
 
int main () {
    float array[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    
    printf ("Before:\n");
    /* The elements before the division*/
    int i = 0;
    while (i < 6) {
        printf ("%.3f", array[i]);
        printf (" ");
        i++;
    }
    
    divby5 (array, 6); /* Call the function */
    
    printf ("\nAfter:\n");
    /* The elements after the division */
    int j;
    for (j = 0; j < 6; j++) {
        printf ("%.3f", array[j]);
        printf (" ");
        
        if (j == 5) {
            printf ("\n");
        }
    }
    
    return 0;    
}
 
/* The function to divide by 5 the elements */
void divby5 (float arr[], int size) {
    int idx;
    for (idx = 0; idx < size; idx++) {
        arr[idx] = arr[idx] / 5.0;
    }
}