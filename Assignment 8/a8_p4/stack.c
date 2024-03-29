/*
   CH-230-A
   a8_p4.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/* Function definitions */

/* Function to push an element into the stack */
void push (int elem, Stack *s) {
    s -> array[s -> count++] = elem;
}

/* Function to pop an element out of the stack */
int pop (Stack *s) {
    int elem;
    elem = s -> array[(s -> count) - 1];
    s -> array[s -> count - 1] = 0;
    (s -> count)--;
    
    return elem;
}

/* Function to check if the stack is empty */
int isEmpty (Stack *s) {
    return s -> count == 0;
}

/* Function to empty the stack */
void empty (Stack *s) {
    printf ("Emptying Stack ");
    
    while (!isEmpty(s)) {
        printf("%d ", pop(s));
    }
    printf("\n");
}

/* Function to convert a number into the binary representation */
void convert (Stack *s, unsigned int elem) {
    /* Array for storing the binary number */
    unsigned int binary[1000];

    int i = 0;
    while (elem > 0) {
        /* Using division by 2 and storing the remainder */
        binary[i] = elem % 2;
        push (binary[i], s);
        elem = elem / 2;
        i++;
    }
}
