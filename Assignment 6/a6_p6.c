/* 
   CH-230-A
   a6_p6.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
/* The macro */
#define BINARY(x) x&1
 
int main () {
    unsigned char c;
    scanf ("%c", &c);  
 
    /* Using %d in order to print the decimal representation */
    printf("The decimal representation is: %d\n", c);
    
    int i, n;
 
    printf("The binary representation is: ");
    /* For storing an integer, 8 bits are needed so the loop is from 7 to 0 */ 
    for (i = 7; i >= 0; --i) {
        n = c >> i;
        printf ("%d", BINARY(n));    
    }
    printf ("\n");
 
    return 0;
}