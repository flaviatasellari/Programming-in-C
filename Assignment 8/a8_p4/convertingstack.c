/*
   CH-230-A
   a8_p4.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main () {
    Stack s;
    s.count = 0;
    
    unsigned int elem;
    scanf ("%d", &elem); /* Read from the keyboard */

    convert (&s, elem); /* Call the function */
    printf ("The binary representation of %d is ", elem);

    while (s.count > 0) {
        printf ("%d", pop (&s));
    }
    printf (".\n");

    return 0;
}