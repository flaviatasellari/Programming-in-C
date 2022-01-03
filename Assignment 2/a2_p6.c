/* 
  CH-230-A
  a2_p6.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    double x, y;
    scanf ("%lf", &x);
    scanf ("%lf", &y);
 
    double *ptr_one; /* Pointer to x variable */
    ptr_one = &x;
 
    double *ptr_two; /* Pointer to x variable */
    ptr_two = &x;
 
    double *ptr_three; /* Pointer to y variable */
    ptr_three = &y;
 
    printf ("The address contained in prt_one is %p\n", ptr_one);
    printf ("The address contained in ptr_two is %p\n", ptr_two);
    printf ("The address contained in ptr_three is %p\n", ptr_three);
 
    return 0;
}