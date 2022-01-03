/*
   CH-230-A
   a5_p11.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The function to determine if the number is prime or not */
int prime (int num1, int num2) {
    if (num1 == 1) {
    /* If the entered integer is 1 */
        return 0;
    }    
    else if (num2 == 1) {
        return 1;
    }
    else {
        if (num1%num2 == 0) {
            return 0;
        }
        else {
            prime(num1, num2-1);
        }
    }
    return 1;
}
 
int main () {
    int x;
    scanf("%d", &x);
 
    if (prime(x, x/2)) {
        printf("%d is prime\n", x);
    }
    else {
        printf("%d is not prime\n", x);
    }
    
    return 0;
}