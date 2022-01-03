/*
  CH-230-A
  a3_p9.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* Compute the sum of the elements in array at position 2 and 5 */
double sum25 (double v[], int n) {
    double sum;
    
    if (n>5) {
        sum = v[2] + v[5];
    }
    else {
        sum = -111;
    }
    
    return sum;
}
 
int main () {
    int n;
    scanf ("%d", &n);
 
    double array[n];
    int i = 0;
 
    while (i < n) {
        scanf ("%lf", &array[i]);
        i++;
    }
 
    if (n>5) {
        printf ("sum=%lf\n", sum25(array, n));
    }
    else {
        /* If the array has 5 or less elements */
        printf ("One or both positions are invalid\n");
    }
 
    return 0;
}