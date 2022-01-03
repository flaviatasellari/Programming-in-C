/* 
   CH-230-A
   a6_p3.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
/* The macro to find the maximum value */
#define MAX(a, b, c) ((a>b && a>c) ? a : \
                     ((b>c) ? b : c))
/* The macro to find the minimum value */
#define MIN(a, b, c) ((a<b && a<c) ? a : \
                     ((b<c) ? b : c))
/* The macro to find the mid-range */
#define MIDRANGE(a, b, c) ((MIN(a,b,c) + MAX(a,b,c)) / 2.0)
 
int main () {
    int x;
    scanf ("%d", &x);
    int y;
    scanf ("%d", &y);
    int z;
    scanf ("%d", &z);
 
    printf ("The mid-range is: %.6f\n", MIDRANGE(x, y, z));
    
    return 0;
}