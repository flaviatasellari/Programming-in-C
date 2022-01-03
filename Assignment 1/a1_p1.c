/*
  CH-230-A
  a1_p1.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    double result; /* The result of our calculation */
    result = (3.0 + 1.0) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
 
/* The numbers were integers that's why the result showed up as 0.000.
   But the values should be double, not integers, so I wrote the numbers with ".0"
   Now the value is printed correctly.
*/