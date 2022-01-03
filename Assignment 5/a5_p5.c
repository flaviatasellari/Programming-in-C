/*
   CH-230-A
   a5_p5.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
 
/* The function to find the scalar product of the two vectors */
double scalarp (double vec1[], double vec2[], int num) {
    int i;
    double product = 0;
    
    for (i = 0; i < num; i++) {
        product += (vec1[i] * vec2[i]);
    }
    return product;
}
 
/* The function to find the smallest component of the vector */
double smallest (double vector[], int num) {
    int i;
    double s = vector[0];
    
    for (i = 0; i < num; i++) {
        if (vector[i] < s) {
            s = vector[i];
        }
    }
    return s;
}
 
/* The function to find the largest component of the vector */
double largest (double vector[], int num) {
    int i;
    double l = vector[0];
    
    for (i = 0; i < num; i++) {
        if (vector[i] > l) {
            l = vector[i];
        }
    }
    return l;    
}
 
/* The function to find the position of the smallest component */
int s_position (double vector[], int num) {
    int i, sp;
    double s = vector[0];
    
    for (i = 0; i < num; i++) {
        if (vector[i] < s) {
            s = vector[i];
        }
    }
    
    for (i = 0; i < num; i++) {
        if (vector[i] == s) {
            sp = i;
            break;
        }
    }
    return sp;
}
 
/* The function to find the position of the largest component */
int l_position (double vector[], int num) {
    int i, lp;
    double l = vector[0];
    
    for (i = 0; i < num; i++) {
        if (vector[i] > l) {
            l = vector[i];
        }
    }
    
    for (i = 0; i < num; i++) {
        if (vector[i] == l) {
            lp = i;
            break;
        }
    }
    return lp;
}
 
int main () {
    int n;
    scanf ("%d", &n);
    int idx;
 
    double v[n];
    /* Getting the input for vector v */
    for (idx = 0; idx < n; idx++) {
        scanf ("%lf", &v[idx]);
    }
    
    double w[n];
    /* Getting the input for vector w */
    for (idx = 0; idx < n; idx++) {
        scanf ("%lf", &w[idx]);
    }
    
    printf ("Scalar product=%lf\n", scalarp (v, w, n));
    printf ("The smallest = %lf\n", smallest (v, n));    
    printf ("Position of smallest = %d\n", s_position (v, n));
    printf ("The largest = %lf\n", largest (v, n));
    printf ("Position of largest = %d\n", l_position (v, n));
    printf ("The smallest = %lf\n", smallest (w, n));    
    printf ("Position of smallest = %d\n", s_position (w, n));
    printf ("The largest = %lf\n", largest (w, n));
    printf ("Position of largest = %d\n", l_position (w, n));    
    
    return 0;
}