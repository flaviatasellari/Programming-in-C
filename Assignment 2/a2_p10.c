/* 
  CH-230-A
  a2_p10.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    
    while (n <= 0) {
        printf ("The value is invalid. Enter again.\n");
        scanf ("%d", &n);
    }

    printf ("1 day = 24 hours\n");

    int i = 2;
    while (i <= n) {
        printf ("%d days = %d hours\n", i, i*24);
        i++;
    }

    return 0;
}