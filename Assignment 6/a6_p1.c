/*
   CH-230-A
   a6_p1.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
/* The macro */
#define SWAP(num1, num2, type) { type x = num1; num1 = num2; num2 = x; }
 
int main () {
    /* Getting input */
    int a;
    scanf ("%d", &a);
    int b;
    scanf ("%d", &b);
    /* Grader didn't accept float variables */
    double c;
    scanf ("%lf", &c);
    double d;
    scanf ("%lf", &d);
    
    SWAP(a, b, int);
    SWAP(c, d, double);
    
    printf ("After swapping:\n");
    printf ("%d\n%d\n%.6lf\n%.6lf\n", a, b, c, d);
    
    return 0;
}