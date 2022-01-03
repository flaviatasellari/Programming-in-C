/*
   CH-230-A
   a5_p8.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
/* The function to read the matrix */
void read (int **matrix, int row, int col) {
    int j, k;
    for (j = 0; j < row; j++) {
        for (k = 0; k < col; k++) {
            scanf ("%d", &matrix[j][k]);
        }
    }
}
 
/* The function to print the matrix */
void print (int **matrix, int row, int col) {
    int j, k;
    for (j = 0; j < row; j++) {
        for (k = 0; k < col; k++) {
            printf ("%d ", matrix[j][k]);
        }
        printf ("\n");
    }
}
 
/* The function to multiply the matrices */
void multiply (int **m1, int **m2, int **mm, int n, int m, int p) {
    int i, j, k, sum = 0;
 
    for (i = 0; i < n; i++) {
        for (k = 0; k < p; k++) {
            for (j = 0; j < m; j++) {
                sum += (m1[i][j] * m2[j][k]);
            }
            mm[i][k] = sum;
            sum = 0;
        }        
    }
}
 
int main () {
    /* Number of rows of matrix 1 and AxB */
    int n;
    scanf ("%d",&n);
    /* Number of columns of matrix 1 and rows of matrix 2 */
    int m;
    scanf ("%d",&m);
    /* Number of columns of matrix 2 and AxB */
    int p;
    scanf ("%d",&p);
    
    int i;
    int **m1, **m2, **mm;
    
    /* Dynamic memory allocation for matrix 1 */
    m1 = (int**) malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++) {
        m1[i] = (int*) malloc(sizeof(int) * m);
    }
    
    /* Dynamic memory allocation for matrix 2 */
    m2 = (int**) malloc(sizeof(int*) * m);
    for (i = 0; i < m; i++) {
        m2[i] = (int*) malloc(sizeof(int) * p);
    }
    
    /* Dynamic memory allocation for the multiplication of matrices */
    mm = (int**) malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++) {
        mm[i] = (int*) malloc(sizeof(int) * p);
    }
    
    /* Reading the matrices */
    read (m1, n, m);
    read (m2, m, p);
    
    /* Printing the matrices */
    printf ("Matrix A:\n");
    print (m1, n, m);
    printf ("Matrix B:\n");
    print (m2, m, p);
    printf ("The multiplication result AxB:\n");
    multiply (m1, m2, mm, n, m, p);
    print (mm, n, p);
    
    /* Deallocating the memory */
    
    for (i = 0; i < n; i++) {
        free (m1[i]);
    }
    free (m1);
 
    for (i = 0; i < m; i++) {
        free (m2[i]);
    }
    free (m2);
 
    for (i = 0; i < n; i++) {
        free (mm[i]);
    }
    free (mm);
 
    return 0;
}