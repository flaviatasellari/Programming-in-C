/* 
   CH-230-A
   a6_p2.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
/* The macro for the least significant bit */
#define DETERMINE(c) c & 1
 
int main () {
    unsigned char c;
    scanf ("%c", &c);
 
    /* Using %d in order to print the decimal representation */
    printf ("The decimal representation is: %d\n", c);
    printf("The least significant bit is: %d\n", DETERMINE(c));

    return 0;
}