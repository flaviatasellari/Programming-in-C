/* 
  CH-230-A
  a2_p5.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    int a;
 
    scanf ("%d", &a);
    printf ("The value is: %d\n", a);
 
    int *ptr_a; /* Pointer to a variable */
    ptr_a = &a; 
 
    printf ("Address of a variable is: %p\n", ptr_a);
 
    *ptr_a = *ptr_a + 5; /* Modifying the value of a */
 
    printf ("The new value is: %d\n", *ptr_a);
    printf ("The new address is: %p\n", ptr_a);
 
    return 0;
 
}