/*
   CH-230-A
   a4_p5.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
 
int count_consonants (char str[]);
 
int main () {
    char string[100];
    
    while (1) {
        fgets(string, sizeof(string), stdin);
        /* When the string is empty */
        if (string[0] == '\n') {
            break;
        }
        
        printf ("Number of consonants=%d\n", count_consonants(string));        
    }    
    
    return 0;
}
 
/* The function to find the consonants in a string */
int count_consonants (char str[]) {
    int vowel = 0, counter = 0, i;
    /* Using pointer */
    char *s = str;
 
    for (i = 0; i < strlen(s); i++) {
        /* All letters */
        if ((*(s + i)>=65 && *(s + i)<=90) || (*(s + i)>=97 && *(s + i)<=122)) {
            counter++;
        }
        
        /* Vowels */
        switch (*(s + i)) {
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