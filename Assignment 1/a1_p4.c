/*
  CH-230-A
  a1_p4.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    int x = 17; 
    int y = 4;
    int sum;
    int product;
    int difference;
    float division;
    int remainder;
 
    sum = x + y;
    product = x * y;
    difference = x - y;
    division = (float) x / (float) y;
    remainder = x % y;
 
    printf ("x=%d\n",x);
    printf ("y=%d\n",y);
    printf ("sum=%d\n",sum);
    printf ("product=%d\n",product);
    printf ("difference=%d\n",difference);
    printf ("division=%f\n",division);
    printf ("remainder of division=%d\n",remainder);
    
    return 0;
}