/*
   CH-230-A
   a8_p5.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *file1, *file2;
	
	/* Open the files */
	file1 = fopen ("chars.txt", "r");
	if (file1 == NULL) {
		printf ("Cannot open file!\n");
		exit (1);
	}
	
	file2 = fopen ("codesum.txt", "w");
	if (file2 == NULL) {
		printf ("Cannot open file!\n");
		exit (1);
	}
	
	/* Get the first two characters from file 1 */
	char x1, x2;
	x1 = getc (file1);
	x2 = getc (file1);
	
	/* The sum of the characters written in file 2 */
	fprintf (file2, "%d", (int)x1 + (int)x2);
	
	fclose (file1);
	fclose (file2);
		
	return 0;
}