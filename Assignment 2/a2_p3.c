/* 
  CH-230-A
  a2_p3.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    /* Declare w for weeks, d for days, h for hours */
    int w;
    int d;
    int h;
 
    scanf ("%d", &w);
    scanf ("%d", &d);
    scanf ("%d", &h);
   
    w = w * 168; /* Turn weeks into hours */
    d = d * 24; /* Turn days into hours */
 
    int total;
    total = w + d + h;
 
    printf ("The total number of hours: %d\n", total);
    return 0;
 
}