/*
  CH-230-A
  a3_p7.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
void print_form (int n, int m, char c) {
    int i;
    int j;
    /* Building the trapezoid */
    for (i = m; i <= m+n-1; i++) {
        /* Creating a nested loop */
        for (j = 0; j < i; j++) {
            printf ("%c", c);
        } 
        printf ("\n");
    }
 
}
 
int main () {
    int n;
    scanf ("%d", &n);
    int m;
    scanf ("%d", &m);
    getchar();
    char c;
    scanf ("%c", &c);
 
    print_form (n, m, c);
 
    return 0;
}