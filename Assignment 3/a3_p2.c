/*
  CH-230-A
  a3_p2.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    char ch;
    scanf ("%c", &ch);
    int n;
    scanf ("%d", &n);
 
    int i;
 
    /* Characters will be shown as ch, ch-1, ..., ch-n */
    for (i=0; i<=n; i++) {
        printf ("%c\n", ch-i);  
    }

    return 0;
}