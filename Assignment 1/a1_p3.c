/*
  CH-230-A
  a1_p3.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h> 
/* Here # was missing so I put # before the word "include" */
 
int main () {
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5;
    /* As the number has a fractional part, it should be float instead of int. */
    result = a / b;
    printf("The result is %f\n", result);
    /* As the data type of the variable result is float,
       %d was wrong so I wrote "f" after %. */
    return 0;
}