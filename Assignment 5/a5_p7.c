/*
   CH-230-A
   a5_p7.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main () {
    char s1[100];
    fgets(s1, sizeof(s1), stdin);
 
    char s2[100];
    fgets(s2, sizeof(s2), stdin);
 
    int size;
    char *conc; 
 
    /* The size of the concatenation */
    size = strlen(s1) + strlen(s2) - 1;
    /* Dynamic memory allocation of the concatenation */
    conc = (char*) malloc(sizeof(char) * size);
 
    /* Concatenate the two strings */
    int i;
    for (i = 0; s1[i] != '\n'; ++i) {
        conc[i] = s1[i];
    }
 
    int j;
    for (j = 0; s2[j] != '\n'; ++j, ++i) {
        conc[i] = s2[j];
    }
    
    conc[i] = '\0';
   
    printf("Result of concatenation: %s\n", conc);
   
    return 0;
}