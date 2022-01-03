/*
   CH-230-A
   a4_p11.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
/* The function that counts the ocurrences of the characters */
int count_insensitive (char *str, char c) {
    int n, count = 0;
    
    for (n = 0; n < strlen(str); n++) {
        if (tolower(c) == tolower(str[n])) {
            count++;
        }
    }
    return count;
}
 
int main () {
    int i;
    char *s1, *s2;
    
    /* Allocate memory for the first string */
    s1 = (char*) malloc(sizeof(char) * 50);

    if (s1 == NULL) {
        exit(1);
    }

    /* Read string */
    fgets(s1, 50, stdin);
    s1[strlen(s1)] = '\0';
    
    /* Allocate memory for the second string.
       Copy the first string to the second one */
    s2 = (char*) malloc(sizeof(char) * strlen(s1));

    if (s2 == NULL) {
        exit(1);
    }
    
    for (i = 0; i < strlen(s1); i++) {
        s2[i] = s1[i];
    }
    
    free(s1);
    
    printf("The character '%c' occurs %d times.\n",'b', count_insensitive(s2,'b'));
    printf("The character '%c' occurs %d times.\n",'H', count_insensitive(s2,'H'));
    printf("The character '%c' occurs %d times.\n",'8', count_insensitive(s2,'8'));
    printf("The character '%c' occurs %d times.\n",'u', count_insensitive(s2,'u'));
    printf("The character '%c' occurs %d times.\n",'$', count_insensitive(s2,'$'));
    
    free(s2);
        
    return 0;
}