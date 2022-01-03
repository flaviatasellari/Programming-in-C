/*
   CH-230-A
   a5_p10.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The recursive function */
void recursion (int num) {
    if (num == 1) {
        printf ("1");
    }
    else {
        printf ("%d, ", num);
        recursion (num-1);
    }
}
 
int main () {
    int n;
    scanf ("%d", &n);
    /* Call the function */
    recursion (n);
    return 0;
}