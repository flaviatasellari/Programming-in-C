/*
   CH-230-A
   a5_p1.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The function to form a triangle */
 void triangle_form (int n, char ch) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i; j++) {
            printf ("%c", ch);
        }
        
        printf ("\n");    
    } 
} 
 
int main () {
    int n;
    scanf ("%i", &n);
    getchar();
    char ch;
    scanf ("%c", &ch);
    
    /* Call the function */
    triangle_form (n, ch);
    
    return 0;
}