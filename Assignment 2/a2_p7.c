/* 
  CH-230-A
  a2_p7.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    int i = 8;
    while (i >= 4)
    { /* Braces were missing so I add them */
        printf ("i is %d\n", i);
        i--;
    }
    printf ("That's it.\n");
    
    return 0;
}