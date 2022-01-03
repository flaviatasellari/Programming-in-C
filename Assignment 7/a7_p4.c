/* 
   CH-230-A
   a7_p4.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
/* Function to print the string uppercase */
void uppercase (char *s) {
    char s1[50];
    strcpy (s1, s); /* In order not to change the original string */
    
    int i;
    for (i = 0; s1[i]; i++) {
        if ((s1[i] >= 97) && (s1[i] <= 122))
            printf ("%c", s1[i] - 32);
        else
            printf ("%c", s1[i]);
    }  
}
 
/* Function to print the string lowercase */
void lowercase (char *s) {
    char s2[50];
    strcpy (s2, s);
 
    int j;
    for (j = 0; s2[j]; j++) {
        if ((s2[j] >= 65) && (s2[j] <= 90))
            printf ("%c", s2[j] + 32);
        else
            printf ("%c", s2[j]);
    }  
}
 
/* Function to print the lowercase characters uppercase and vice versa */
void viceversa (char *s) {
    char s3[50];
    strcpy (s3, s);
 
    int k;
    for (k = 0; s3[k]; k++) {
        if ((s3[k] >= 97) && (s3[k] <= 122))
            printf ("%c", s3[k]-32);
        else if ((s3[k] >= 65) && (s3[k] <= 90))
            printf ("%c", s3[k]+32);           
        else
            printf ("%c", s3[k]);
    }
}
 
/* Function to quit the execution */
void end (char *s) {
    exit(1);
}
 
/* Function pointer */
void (*perform[4]) (char *s)
    = {uppercase, lowercase, viceversa, end};
 
int main () {
    char string[50];
    fgets (string, sizeof(string), stdin);
 
    int num;
    scanf ("%d", &num);
 
    while (1) {
        perform [num-1] (string);
        scanf ("%d", &num);
    }
    
    return 0;
}