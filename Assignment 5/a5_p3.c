/*
   CH-230-A
   a5_p3.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
/* The function that counts the number of lowercase characters */
int count_lower (char* str) {
    int count = 0;
    while (*str != '\0') {
        if (islower (*str)) {
        count++;
        }
    str++;
    }
    
    return count;
}
 
int main () {
    char s[50];
    
    while (1) {
        fgets (s, sizeof(s), stdin);
        s[strlen(s)-1] = '\0';
        
        /* The program stops its execution */
        if (s[0] == '\0') {
            break;
        }
        
        printf ("There are %d lowercase characters in the string.\n", count_lower(s));
    }
    
    return 0;
}