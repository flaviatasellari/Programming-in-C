/*
   CH-230-A
   a4_p10.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <math.h>
 
/* The function to perform all the required operations */
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}
 
int main () {
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
 
    float product, division, power, inversion;
    proddivpowinv (num1, num2, &product, &division, &power, &inversion);
    
    /* Printing the values to test the program */
    printf("First number = %f\n", num1);
    printf("Second number = %f\n", num2);
    printf("The product = %f\n", product);
    printf("The division = %f\n", division);
    printf("First no. to the power of second no. = %f\n", power);
    printf("Inverse of the second number = %f\n", inversion);    
    
    return 0;
}