/* 
   CH-230-A
   a6_p5.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
/* The macro */
#define BINARY(x) x&1
 
/* The function to count the bits in a number */
unsigned int counting (unsigned int num) { 
   unsigned int counter = 0; 
   while (num) { 
        counter++; 
        num >>= 1; 
    } 
    return counter; 
} 
 
int main () {
    unsigned char c;
    scanf ("%c", &c);
    
    /* Using %d in order to print the decimal representation */
    printf ("The decimal representation is: %d\n", c);
 
    int i, reverse;
 
    printf ("The backwards binary representation is: ");
    /* The loop to print the number backwards */
    for (i = 0; i < counting(c); i++) {
        reverse = c >> i;
        printf ("%d", BINARY(reverse));    
    }
    printf ("\n");
 
    return 0;
}