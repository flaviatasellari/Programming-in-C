/*
   CH-230-A
   a4_p4.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
 
int count_consonants (char str[]);
 
int main () {
    char string[100];
    
    while (1) {
        fgets (string, sizeof(string), stdin);
        /* When the string is empty */
        if (string[0] == '\n') {
            break;
        }
        
        printf ("Number of consonants=%d\n", count_consonants (string));        
    }    
    
    return 0;
}
 
/* The function to find the consonants in a string */
int count_consonants (char str[]) {
    int vowel = 0, counter = 0, i;
    
    for (i = 0; i < strlen(str); i++) {
        /* All letters */
        if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) {
            counter++;
        }
        /* Vowels */
        switch (str[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            case 'y':
            case 'Y':
                vowel++;
                break;
            default:
                break;    
        }
    }    
    
    /* Consonants */
    return (counter - vowel);
}