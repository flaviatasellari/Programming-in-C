/* 
  CH-230-A
  a2_p8.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    int a;
    scanf ("%d", &a);
 
    if (a%2 == 0 && a%7 == 0) {
        /* if condition is true, print the following */
        printf ("The number is divisible by 2 and 7\n");
    }
    
    else {
        /* if condition is not true, then print the following */
        printf ("The number is NOT divisible by 2 and 7\n");
    }
 
    return 0;
}