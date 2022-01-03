/*
  CH-230-A
  a3_p8.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The function to find the sum of the numbers */
float addition (float a[], int n) {
    int j;
    float sum = 0;
    
    for (j = 0; j < n; j++) {
        sum += a[j];
    }
    
    return sum;
}
 
/* The function to find the average of the numbers */
float average (float a[], int n) {
    int k;
    float average;
    float sum = 0;
    
    for (k = 0; k < n; k++) {
        sum += a[k];  
    }
    
    if (n == 0) {
        return 0;
    }
    
    average = sum / n;
    
    return average;
}
 
int main () {
    float array[10];
    
    int i;
    array[0] = 0;
 
    for (i=0; i<10; i++) {
        scanf ("%f", &array[i]);
        
        /* If the number entered is -99.0, stop reading numbers */
        if (array[i] == -99.0) {
            break;
        }
 
    }
 
    printf ("Sum = %f\n", addition(array, i));
    printf ("Average = %f\n", average(array, i));
    
    return 0;
}