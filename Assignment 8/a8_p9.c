/*
   CH-230-A
   a8_p9.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int n;
	scanf("%d", &n);
	getchar();

	FILE *final_file;
	final_file = fopen("output.txt", "wb");
	if (!final_file) {
	    fprintf (stderr, "Cannot open file!\n") ;
		exit (1) ;
	}

	/* Read from the keyboard the names of the files */
    int i;
	for (i = 0; i < n; i++) {
		FILE *allfiles;

		char filename[20];
		fgets (filename, sizeof(filename), stdin);
		filename [strlen(filename) - 1] = '\0'; 
		allfiles = fopen (filename, "rb");

		if (allfiles == NULL) {
		    fprintf (stderr, "Cannot open file!\n") ;
			exit(1) ;
		}

		/* Concatenate each file with the final file */
		char buffer[64];
		char nl = '\n';
		size_t size = fread (buffer, sizeof(char), 64, allfiles);
        
		fwrite (buffer, 1, size, final_file);
		fwrite (&nl, 1, 1, final_file);
		fclose (allfiles); 
	}

	fclose (final_file);

	/* This time open "output.txt" to read it */
	final_file = fopen("output.txt", "rb");
	if (final_file == NULL) {
	    fprintf (stderr , "Cannot open file!\n") ;
		exit (1) ;
	}

    char array[200]; /* for printing the content of the concatenation */

	printf ("Concatenating the content of %d files ...\n", n);
	printf ("The result is:\n");
	fread (array, 1, 200, final_file);
	printf ("%s\n", array); 
    printf ("The result was written into output.txt\n");
	
	fclose (final_file);

	return 0;
}