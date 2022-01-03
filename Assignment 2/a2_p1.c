/*
  CH-230-A
  a2_p1.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    double a;
    double b;
    int c;
    int d;
    char e;
    char f;
 
    scanf ("%lf", &a);
    getchar ();
    scanf ("%lf", &b);
    getchar ();
    scanf ("%d", &c);
    getchar ();
    scanf ("%d", &d);
    getchar ();
    scanf ("%c", &e);
    getchar ();
    scanf ("%c", &f);
    getchar ();
 
    double sum;
    sum = a + b;

    double difference;
    difference = a - b;

    double square;
    square = a * a;

    int sum1;
    sum1 = c + d;

    int product1;
    product1 = c * d;

    int sum2;
    sum2 = e + f;

    int product2;
    product2 = e * f;

    char sum3;
    sum3 = e + f;
    
    char product3;
    product3 = e * f;
 
    printf ("sum of doubles=%lf\n", sum);
    printf ("difference of doubles=%lf\n", difference);
    printf ("square=%lf\n", square);
    printf ("sum of integers=%d\n", sum1);
    printf ("product of integers=%d\n", product1);
    printf ("sum of chars=%d\n", sum2);
    printf ("product of chars=%d\n", product2);
    printf ("sum of chars=%c\n", sum3);
    printf ("product of chars=%c\n", product3);
 
    return 0;
 
}