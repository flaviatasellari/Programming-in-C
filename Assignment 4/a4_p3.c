/*
   CH-230-A
   a4_p3.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <math.h>
 
float sum (float arr[], int num);
float geometric_mean (float arr[], int num);
float highest_num (float arr[], int num);
float smallest_num (float arr[], int num);
 
int main () {
    float array[15];
    int idx;
    int count = 0;
    
    printf ("Enter up to 15 floats:\n");
    array[0]=0;
 
    for (idx = 0; idx < 15 ; idx++) {
        scanf("%f", &array[idx]);
        
        if (array[idx] >= 0) {
            count++;
        }
        /* A negative value ends the loop*/
        if (array[idx] < 0) {
            break;
        }
    }
    
    char c;
 
    printf ("Choose a character between m, h, l or s:\n");
    getchar();
    scanf ("%c", &c);
    
    /* Performing the desired operations */
    switch (c) {
        case 'm':
            printf ("Geometric mean = %f\n", geometric_mean (array, count));
            break;
        case 'h':
            printf ("Highest number = %f\n", highest_num (array, count));
            break;
        case 'l':
            printf ("Smallest number = %f\n", smallest_num (array, count));
            break;
        case 's':
            printf ("Sum = %f\n", sum (array, count));
            break;
        default:
            printf ("Error");
        }
 
    return 0;
}
 
/* The function to find the mean */
float geometric_mean (float arr[], int num) {
    int i;
    float mean, p = 1;
    
    for (i = 0; i < num; i++) {
        p *= arr[i];
    }
 
    mean = (float) pow (p, (1.0/i));
    return mean;    
}
 
/* The function to find the highest number */
float highest_num (float arr[], int num) {
    int j;
    float high;
    
    for (j = 1; j < num; ++j) {
       if (arr[0] < arr[j])
           arr[0] = arr[j];
    }
 
    high = arr[0];
    return high;
}
 
/* The function to find the smallest number */
float smallest_num (float arr[], int num) {
    int k;
    float small;
    
    for (k = num-1; k > 1; --k) {
       if (arr[0] > arr[k])
           arr[0] = arr[k];
    }
 
    small = arr[0];
    return small;
}
 
/* The function to find the sum */
float sum (float arr[], int num) {
    int l;
    float sum1 = 0;
 
    for (l = 0; l < num; l++) {
        sum1 += arr[l];
    }
    
    return sum1 ;
}