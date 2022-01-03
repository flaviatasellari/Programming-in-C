/* 
  CH-230-A
  a3_p1.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    float x;
    scanf ("%f", &x);
    int n;
    scanf ("%d", &n);
    int i;
 
    while (n <= 0) { 
        /* If n is 0 or negative, print the following */
        printf ("Input is invalid, reenter value\n");
        scanf ("%d", &n); /* Enter a value for n variable again */
    }
 
    for (i=1; i<=n; i++) { 
        /* If n is positive, print the following */
        printf ("%f\n", x);
        /* Here the value of x will be shown n times */
    }
}