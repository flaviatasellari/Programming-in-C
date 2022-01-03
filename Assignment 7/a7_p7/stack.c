/*
   CH-230-A
   a7_p7.c
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