/* 
   CH-230-A
   a7_p6.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct person {
    char name[30];
    int age;
};
 
/* Function to sort people according to their name */
int sort_name (struct person P1, struct person P2) {
    if (strcmp (P1.name, P2.name) == 0) {
        return (P1.age > P2.age);
    }
    else {
        if (strcmp (P1.name, P2.name) < 0) {
            return 0;
        }
        else {
            return 1;
        }
    }
}
 
/* Function to sort people according to their age */
int sort_age (struct person P1, struct person P2) {
    if (P1.age == P2.age) {
        if (strcmp (P1.name, P2.name) < 0) {
            return 0;
        }
        else {
            return 1;
        }
    }
    else {
        return (P1.age > P2.age);
    }
}
 
/* Function pointer */
struct person (*fun) (struct person, struct person);
 
/* The bubblesort */
void bubblesort (struct person *p, int num, int(*fun)(struct person,struct person)) {
    int swapped = 1;
    int x;
    char charx[50];
 
    while (swapped) { 
           swapped = 0;
        int i;
        for (i = 0; i < num - 1; i++) {           
            if (fun (p[i], p[i+1])) {  
                /* Names swapped */
                strcpy(charx, p[i].name);
                strcpy(p[i].name, p[i+1].name);
                strcpy(p[i+1].name, charx);
                
                /* Ages swapped */
                x = p[i].age;
                p[i].age = p[i + 1].age;
                p[i + 1].age = x;
                
                /* Return to the loop */
                   swapped = 1;
           }
        }
        num--;
    }
}
 
/* Function to print the sorted info of the people */
void print_info (struct person *p, int num) {
    int i;
    for (i = 0; i < num; i++) {
        printf("{%s, %d}; ", p[i].name, p[i].age);
    }
    printf("\n");
}
 
int main () {
    int num;
    scanf ("%d", &num);
    
    struct person list [num];
    /* Get info for each person */
    int i;
    for (i = 0; i < num ; i++) {
        scanf ("%s", list[i].name);
        scanf ("%d", &list[i].age);
    }
    
    /* Sort with respect to their names */
    bubblesort (list, num, sort_name);
    print_info (list, num);
    
    /* Sort with respect to their ages */
    bubblesort (list, num, sort_age);
    print_info (list, num);
    
    return 0;
}