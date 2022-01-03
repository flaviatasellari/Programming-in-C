/*
  CH-230-A
  a3_p5.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The function to show the temperatures in Fahrenheit */
double fahrenheit (double x) {
    return (9.0 / 5 * x + 32);
}
 
void Sort1 (double array[], int n) {
    int idx, a, f = n-2;
    int substituted = 1;
    
    while (substituted) {
        substituted = 0;
        
        for (idx = 0; idx < f; idx++) {
            if (array[idx] > array[idx+1]) {
                a = array[idx];
                array[idx] = array[idx+1];
                array[idx+1] = a;
                substituted = 1;
            }
        }
        f--;
    }
 
}
 
int main () {
    char c;
    scanf ("%c", &c);
    int n;
    scanf ("%d", &n);
    
    double sum = 0;
    double average;
 
    double temperature[n]; /* store the temperatures */
    
    int i, j;
 
    for (i=0; i<n; i++) {
        scanf ("%lf", &temperature[i]);
        sum = sum + temperature[i];
    }
 
    average = sum / n;
    
    Sort1(temperature, n);
 
    switch (c) {
        case 's':
        /* Print the sum */
        printf ("Sum of temperatures: %lf\n", sum);
        break;
 
        case 'p':
        /* Print the temperatures */
        printf ("List of temperatures: \n");
        for (j=0; j<n; j++) {
            printf ("%lf\n", temperature[j]);
        }
        break;
 
        case 't':
        /* Print the temperatures in Fahrenheit */
        printf ("List of temperatures in Fahrenheit: \n");
        for (j=0; j<n; j++) {
            printf ("%lf\n", fahrenheit(temperature[j]));
        }
        break;
 
        default:
        /* Print the average */
        printf("Average of temperatures: %f\n", average);
    }
 
    return 0;
 
}