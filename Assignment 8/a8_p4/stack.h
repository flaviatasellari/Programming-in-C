/*
   CH-230-A
   a8_p4.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#ifndef STACK_H
#define STACK_H

/* Struct definition and function declarations */

typedef struct stack {
   unsigned int count;
   int array[12]; // Container
} Stack;

void push (int, Stack*);

int pop (Stack*);

void empty (Stack*);

int isEmpty (Stack*);

void convert (Stack*, unsigned int);

#endif 
