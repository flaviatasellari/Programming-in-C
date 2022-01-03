/*
   CH-230-A
   a4_p12.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
/* The function to perform the replacement */
void replaceAll (char *str, char c, char e) {
    int i;
    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            str[i] = e;
        }
    }
}
 
int main () {
    char string[80], c1, c2;
    
    while (1) {
        /* Reading the string */
        fgets (string, sizeof(string), stdin);
        string[strlen(string)-1] = '\0';
        
        /* The program stops executing*/
        if (strcmp(string, "stop") == 0) {
            break;
        }
        
        /* Enter the chars */
        scanf("%c", &c1);
        getchar();
        scanf("%c", &c2);
        
        printf("String before replacement: %s\n", string);
        /* Call the function */
        replaceAll(string, c1, c2);
        printf("String after replacement: %s\n", string);
        getchar();
    }
    
    return 0;
}