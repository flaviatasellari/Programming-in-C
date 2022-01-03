/* 
   CH-230-A
   a6_p7.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
/* The macro */
#define BINARY(x) x&1
 
void set3bits (unsigned char *ch, int a, int b, int c) {
    /* Initialize char as pointer for the bits to change to 1 */
    *ch |= 1 << a;
    *ch |= 1 << b;
    *ch |= 1 << c;
}
 
int main () {
    unsigned char c;
    scanf ("%c", &c);
    /* Positions of bits that will change to 1 */
    int bit1;
    scanf ("%d", &bit1);
    int bit2;
    scanf ("%d", &bit2);
    int bit3;
    scanf ("%d", &bit3);
 
    /* Using %d in order to print the decimal representation */
    printf ("The decimal representation is: %d\n", c);
    
    int i, n;
 
    printf ("The binary representation is: ");
    for (i = 7; i >= 0; --i) {
        n = c >> i;
        printf("%d", BINARY(n));    
    }
    printf("\n");
 
    /* Call the function */
    set3bits (&c, bit1, bit2, bit3);
    
    printf("After setting the bits: ");
    for (i = 7; i >= 0; --i) {
        n = c >> i;
        printf("%d", BINARY(n));    
    }
    printf("\n");
 
    return 0;
    
}