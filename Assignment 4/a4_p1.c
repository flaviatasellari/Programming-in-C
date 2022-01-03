/*
  CH-230-A
  a4_p1.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <math.h>
 
int main () {
    float lower;
    float upper;
    float step;
 
    scanf ("%f", &lower);
    scanf ("%f", &upper);
    scanf ("%f", &step);
 
    float i;
 
    for (i = lower; i <= upper; i += step) {
 
        printf ("%f %f %f\n", i, i*i*M_PI, 2*i*M_PI);
        /* Use pi to find the area and perimeter */
    }

    return 0;
}