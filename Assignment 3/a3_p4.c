/*
  CH-230-A
  a3_p4.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx) {} 
    /* I add brackets in the for loop */
        /* do nothing */

    return idx+0;
    /* I add 0 in order to print the right position of g */
}
 
int main() {
    char line[80];

    while (1) {
        printf ("Enter string:\n");
        fgets (line, sizeof(line), stdin);
        printf ("The first occurrence of 'g' is: %d\n", position(line, 'g'));
        break; /* I put break to stop the loop */
    }
 
    return 0;
}