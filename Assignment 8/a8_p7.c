/*
   CH-230-A
   a8_p7.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
int main () {
    FILE *file1, *file2, *file3;
    
    /* Open the files */
    file1 = fopen ("text1.txt", "r");
    if (file1 == NULL) {
        printf ("Cannot open file!\n");
        exit (1);
    }
 
    file2 = fopen ("text2.txt", "r");
    if (file2 == NULL) {
        printf ("Cannot open file!\n");
        exit (1);
    }
 
    file3 = fopen ("merge12.txt", "w");
    if (file3 == NULL) {
        printf ("Cannot open file!\n");
        exit (1);
    }
    
    /* Merge the files */
    char x;
    while ((x = fgetc(file1)) != EOF) {
        fputc (x, file3);
    }
    
    while ((x = fgetc(file2)) != EOF) {
        fputc (x, file3);
    }
    
    fclose (file1);
    fclose (file2);
    fclose (file3);
    
    return 0;
}