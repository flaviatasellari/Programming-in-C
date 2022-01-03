/*
  CH-230-A
  a3_p10.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The function to find the product */
float product (float a, float b) {
    float product;
    product = a * b;
    return product;
}
 
/* The function to find the product by reference */
void productbyref (float a, float b, float *p) {
    *p = a * b;
}
 
/* The function to modify the values */
void modifybyref (float *a, float *b) {
    *a += 3;
    *b += 11;
}
 
int main () {
    float x;
    float y;
    float z;
 
    printf ("Enter two float values: \n");
    scanf ("%f", &x);
    scanf ("%f", &y);
 
    printf ("Product of the values = %f\n", product(x,y));
    
    productbyref (x, y, &z);
    printf ("Product of the values by reference = %f\n", z);
    
    modifybyref (&x, &y);
    printf ("The modified values: x = %f, y = %f\n", x, y);
 
    return 0;
}