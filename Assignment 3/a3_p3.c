/*
  CH-230-A
  a3_p3.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The function to convert cm to km*/
float convert (int cm) {
    float km;
    km = (float) cm / 100000;
    return km;
}
 
int main () {
    int lengthcm;
    scanf ("%d", &lengthcm);
 
    float lengthkm;
    lengthkm = convert (lengthcm); /* Call the function */
 
    printf ("Result of conversion: %f\n", lengthkm);
 
    return 0;
 
}