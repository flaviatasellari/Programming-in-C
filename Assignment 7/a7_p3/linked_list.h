/*
   CH-230-A
   a7_p3.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
 
struct list {
    int info;
    struct list* next; /* self reference */
};
 
struct list* push_front (struct list *my_list, int value);
 
struct list* push_back (struct list* my_list, int value);
 
struct list* remove_first (struct list *my_list);
 
void print_list (struct list* my_list);
 
void dispose_list (struct list* my_list);
 
#endif