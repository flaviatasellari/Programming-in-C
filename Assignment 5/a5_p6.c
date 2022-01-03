/*
   CH-230-A
   a5_p6.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    int n;
    scanf("%d", &n);
    
    float array[n];
    float *p = array;
    
    /* Getting the input */
    int i;
    for (i = 0; i < n; i++) {
        scanf ("%f", &array[i]); 
    }
    
    while (*p >= 0) {
        /* Count the positive elements until a negative shows up */
        p++; 
    }
    /* Finding the elements before the first negative value using
    the difference between the actual pointer position and the intial one */
    printf ("Before the first negative value: %ld elements\n", p-array);
    return 0;
}