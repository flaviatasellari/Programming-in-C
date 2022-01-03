/*
   CH-230-A
   a5_p9.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
/* The function to read the elements of the 3D-array */
void read (int ***array3d, int row, int column, int depth) {
    int i, j, k;
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            for (k = 0; k < depth; k++) {
                scanf ("%d", &array3d[i][j][k]);
            }
        }
    }
}
 
/* The function to print the 2D-sections of the 3D-array */
void print2dsections (int ***array3d, int row, int column, int depth) {
    int i, j, k;
    for (k = 0; k < depth; k++) { 
        printf ("Section %d:\n", k+1);
        for (i = 0; i < row; i++) {
            for (j = 0; j < column; j++) {
                printf ("%d ", array3d[i][j][k]);
            }
        printf ("\n");
        }
    }
}
 
int main () {
    int row;
    scanf ("%d", &row);
    int column;
    scanf ("%d", &column);
    int depth;
    scanf ("%d", &depth);
    
    int ***array3d;
    int i, j;
    
    /* Dynamic memory allocation for the 3D-array */
    array3d = (int***) malloc(sizeof(int**) * row);
 
    for (i = 0; i < row; i++) {
        array3d[i] = (int**) malloc(sizeof(int*) * column);
        
        for (j = 0; j < column; j++) {
            array3d[i][j] = (int*) malloc(sizeof(int*) * depth);
        }
    }
 
    /* Calling the functions */
    read (array3d, row, column, depth);
    print2dsections (array3d, row, column, depth);
    
    /* Deallocating the memory */
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            free (array3d[i][j]);
        }
        free (array3d[i]);
    }
    free (array3d);
 
    return 0;
}