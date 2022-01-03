/*
  CH-230-A
  a1_p6.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    char c = 'F';
    char result = c + 3;
    int a = c + 3;
    
    printf ("The third character after F is %c\n" , result);
    printf ("Its corresponding ASCII code is %d\n" , a);
    
    return 0;
}