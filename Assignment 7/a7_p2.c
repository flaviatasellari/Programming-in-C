/* 
   CH-230-A
   a7_p2.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
/* Declaration of struct */
struct list
{
    char character;
    struct list *next;
    struct list *pre;
};
 
/* Element added at the beginning of the list */
struct list *push_front (struct list *my_list, char ch) {
    struct list *newel;
    newel = (struct list*) malloc (sizeof(struct list));
    
    if (!newel)
        exit(0);
 
    if (my_list == NULL) {
        newel -> character = ch;
        newel -> next = NULL;
        newel -> pre = NULL;
        return newel;
    }
 
    newel -> character = ch;
    newel -> pre = NULL;
    newel -> next = my_list;
    my_list -> pre = newel;
    return newel;
}
 
/* All elements with the given character removed */
struct list *remove_el (struct list *my_list, char ch) {
    int i = 0;
    struct list *pre = NULL;
    struct list *next = NULL;
    struct list *cursor = my_list;
 
    if (my_list == NULL)
        return my_list;
    
    while (cursor) {
        pre = cursor -> pre;
        next = cursor -> next;
 
        /* First value of the linked list */
        if (pre == NULL && (cursor -> character == ch)) {
            next -> pre = NULL;
            cursor -> next = NULL;
            cursor = next;
            my_list = next;
            i++;
            continue;
        }
 
        /* Last value of the linked list */
        if (next == NULL && cursor->character == ch) {
            pre -> next = NULL;
            cursor -> pre = NULL;
            i++;
            break;
        }
 
        /* All other cases */
        if (cursor -> character == ch) {
            pre -> next = next;
            next -> pre = pre;
            cursor -> next = NULL;
            cursor -> pre = NULL;
            cursor = next;
            i++;
            continue;
        }
 
        cursor = cursor -> next;
    }
 
    if (i == 0)
        printf("%s\n", "The element is not in the list!");
 
    return my_list;
}
 
/* The list printed */
void print_list (struct list *my_list) {
    struct list *cursor;
    for (cursor = my_list; cursor; cursor = cursor -> next) {
        printf("%c ", cursor -> character);
    }
    printf("\n");
}
 
/* The list printed backwards */
void print_backwards (struct list *my_list) {
    struct list *cursor;
    /* The cursor goes till the end */
    for (cursor = my_list; cursor; cursor = cursor -> next) {
        if (cursor -> next == NULL)
            break;
    }
 
    for (; cursor; cursor = cursor -> pre)
        printf("%c ", cursor -> character);
    printf("\n");
}
 
/* The execution is stopped */
void dispose_list (struct list *my_list) {
    struct list *element;
    while (my_list != NULL) {
        element = my_list -> next;
        free (my_list);
        my_list = element;
    }
}
 
int main () {
    int num;
    char char1;
    int i = 0;
    struct list *the_list = NULL;
    
    do {
        scanf ("%d", &num);
        getchar();
 
        switch (num)
        {
            case 1:
            /* Add the following number at the beginning of the list */
                scanf ("%c", &char1);
                the_list = push_front (the_list, char1);
                break;
            case 2:
            /* Remove all elements with the given char from the list */
                scanf ("%c", &char1);
                the_list = remove_el (the_list, char1);
                break;
            case 3:
            /* Print the list */
                print_list (the_list);
                break;
            case 4:
            /* Print the list backwards */
                print_backwards (the_list);
                break;
            case 5:
            /* Quit the execution of the program */
                dispose_list (the_list);
                i = 1;
                break;
        }
    }
    while (!i);
 
    return 0;
}