/*
   CH-230-A
   a4_p7.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
/* The function to create the form of the matrix */
void matrix_form (int m[30][30], int num) {
    int k, h;
    for (k = 0; k < num; k++){
        for (h = 0; h < num; h++){
            printf ("%d ", m[k][h]);
        }
        printf ("\n");
    }
}
 
/* The function to print the elements under the main diagonal */
void under_diagonal (int m[30][30], int num) {
    int k, h;
    for (k = 0; k < num; k++) {
        for (h = 0; h < num; h++) {
            if (k > h) {
                printf ("%d ", m[k][h]);
            }
        }
    }
    printf ("\n");
}
 
int main () {
    /* Declaring the two dimensional array */
    int matrix[30][30];
    
    int n;
    scanf ("%d", &n);
 
    int i, j;
    
    for (i = 0; i < n; i++) {    
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf ("The entered matrix is:\n");
    matrix_form (matrix, n);
    
    printf ("Under the main diagonal:\n");
    under_diagonal (matrix, n);
    
    return 0;
}