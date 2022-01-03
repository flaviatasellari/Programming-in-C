/*
   CH-230-A
   a4_p2.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
 
int main () {
    char string[50];
    /* Reading the string */
    fgets (string, sizeof(string), stdin);
 
    int i; 
    int j = 0;
 
    string[strlen(string)-1] = '\0';
 
    for (i = 0; i < strlen(string); i++) {
        if (j%2 == 0) {
            printf ("%c\n", string[i]);
        }
        else {
            /* There is a space before the character */
            printf (" %c\n", string[i]);
        }
        j++;
    }
    
    return 0;
}