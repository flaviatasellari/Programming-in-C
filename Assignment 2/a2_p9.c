/* 
  CH-230-A
  a2_p9.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    char a;
    scanf ("%c", &a);
 
    /* ASCII code */
    if (a>=48 && a<=57) /* The character is a digit */
    {
        printf ("%c is a digit\n", a);
    }
    else if ((a>=65 && a<=90) || (a>=97 && a<=122)) 
    /* The character is a letter */
    {
        printf ("%c is a letter\n", a);
    }
    else /* The character is some other symbol */
    {
        printf ("%c is some other symbol\n", a);
    }
 
    return 0;
}