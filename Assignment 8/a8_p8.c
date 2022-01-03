/*
   CH-230-A
   a8_p8.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	FILE *file1;

	/* Read from the keyboard the name of the file */
	char a1[30];
	fgets (a1, sizeof(a1), stdin);
	a1 [strlen(a1) - 1] = '\0';
	
	/* Open the file */
	file1 = fopen (a1, "r");
	if (file1 == NULL) {
	    fprintf (stderr, "Cannot open file!\n") ;
		exit (1) ;
	}
	
	/* Counter increases with this group of characters */
	char c;
	int counter = 0;

	while ((c = fgetc (file1)) != EOF) {
		if (c==' '||c==','||c=='?'||c=='!'||c=='.'||c=='\t'||c=='\r'||c=='\n') {
			while ((c = fgetc(file1)) != EOF) {
			if (c==' '||c==','||c=='?'||c=='!'||c=='.'||c=='\t'|| c=='\r'||c=='\n') {
				continue;
			}
            else {
            	break;
			}
		}
		counter++;
		}
    }

    printf ("The file contains %d words.\n", counter);
    
	fclose (file1);
	return 0;
}