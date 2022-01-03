/*
   CH-230-A
   a8_p6.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	FILE *file1, *file2, *file3;
	
	/* Read from the keyboard the names of the two files */
	char a1[100];
	printf ("File 1: ");
	fgets (a1, sizeof(a1), stdin);
	a1[strlen(a1) - 1] = '\0';
	
	char a2[100];
	printf ("File 2: ");
	fgets (a2, sizeof(a2), stdin);
	a2[strlen(a2) - 1] = '\0';
	
	/* Open the files */
	file1 = fopen (a1, "r");
	if (file1 == NULL) {
		printf("Cannot open file!\n");
		exit(1);
	}
	
	file2 = fopen (a2, "r");
	if (file2 == NULL) {
		printf("Cannot open file!\n");
		exit(1);
	}
	
	file3 = fopen ("results.txt", "w");
	if (file3 == NULL) {
		exit(1);
	}
	
	double el1, el2;
	fscanf (file1, "%lf", &el1);
	fscanf (file2, "%lf", &el2);
	
	/* All the computations written in file 3 */
	fprintf (file3, "The sum = %lf\n", el1 + el2);
	fprintf (file3, "The difference = %lf\n", el1 - el2);
	fprintf (file3, "The product = %lf\n", el1 * el2);
	fprintf (file3, "The division = %lf\n", el1 / el2);
	
	fclose (file1);
	fclose (file2);
	fclose (file3);	
	
	return 0;
}