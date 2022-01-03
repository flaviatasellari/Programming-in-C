/* 
  CH-230-A
  a2_p4.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
int main () {
    float a;
    float b;
    float h;
 
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &h);
 
    float areas; /* Area of the square */
    areas = a * a;
    float arear; /* Area of the rectangle */
    arear = a * b;
    float areat; /* Area of the triangle */
    areat = (a * h) / 2;
    float areatrp; /* Area of the trapezoid */
    areatrp = (a + b) / 2 * h;
 
    printf("square area=%f\n", areas);
    printf("rectangle area=%f\n", arear);
    printf("triangle area=%f\n", areat);
    printf("trapezoid area=%f\n", areatrp);
 
    return 0;
 
}