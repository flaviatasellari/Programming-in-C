/*
  CH-230-A
  a3_p6.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The function to turn kg and g into pounds */
float to_pounds (int kg, int g) {
    int a = kg * 1000; /* Turn kg to g */
    g = g + a;
    float pounds;
    pounds = g * 0.0022; /* Turn g to pounds */
    return pounds;
}
 
int main () {
    int kilograms;
    scanf ("%d", &kilograms);
    int grams;
    scanf ("%d", &grams);
 
    float weight_pounds;
    weight_pounds = to_pounds (kilograms, grams);
 
    printf ("Result of conversion: %f\n", weight_pounds);
 
    return 0;
 
}