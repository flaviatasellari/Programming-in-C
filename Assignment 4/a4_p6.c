/*
   CH-230-A
   a4_p6.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
/* The function to find the 2 greatest values */
void greatest_values (int arr[], int num) {
    /* When the size of array is less than 2 */
    if (num < 2) {
        printf ("Dimension of array should not be less than 2\n");
        return;
    }
 
    int num1, num2, a, i;
 
    num1 = arr[0];
    num2 = arr[1];
 
    if (num1 < num2) {
        a = num1;
        num1 = num2;
        num2 = a;
    }
    
    for (i = 0; i < num; i++) {
        if (arr[i] > num1) {
            num2 = num1;
            num1 = arr[i];
        }
        else if (arr[i] > num2) {
            num2 = arr[i];
        }
    }
    printf ("The two greatest numbers are: %d and %d\n", num1, num2);
}
 
int main () {
    int n;
    printf ("Dimension of array: ");
    scanf ("%d", &n);
    
    int *array;
    /* Dynamic memory allocation */
    array = (int*) malloc(sizeof(int) * n);
    
    if (array == NULL) {
        exit(1);    
    }
    
    int i;
 
    for (i = 0; i < n; i++) {
        printf ("Enter integer %d: ", i);
        scanf ("%d", &array[i]);
    }
    
    /* Call the function */
    greatest_values (array, n);
    
    free(array);
    return 0;   
}