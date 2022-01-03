/* 
   CH-230-A
   a6_p4.c
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
 
/* The macro to find the intermediate results */
#define INTERMEDIATE(vec1, vec2, vec12, n)\
{\
    int i;\
    for (i = 0; i < n; i++) {\
        vec12[i] = (vec1[i] * vec2[i]);\
    }\
}
 
/* The macro to find the scalar product */ 
#define S_PRODUCT(vec1, vec2, sp, n)\
{\
    int i;\
    for (i = 0; i < n; i++ ){\
        sp += (vec1[i] * vec2[i]);\
    }\
}
 
int main () {
    int n;
    scanf ("%d", &n);
 
    int i;
    /* First vector */
    int vec1[n];
    for (i = 0; i < n; i++) {
        scanf ("%d", &vec1[i]);
    }
    /* Second vector */
    int vec2[n];
    for (i = 0; i < n; i++) {
        scanf ("%d", &vec2[i]);
    }
 
    int vec12[n];
 
    /* Conditional compilation */
    /* If INTERMEDIATE is not defined, intermediate values will not be printed */
    #ifdef INTERMEDIATE
    
    INTERMEDIATE(vec1, vec2, vec12, n);
    printf ("The intermediate product values are:\n");
 
    for (i = 0; i < n; i++) {
        printf ("%d\n", vec12[i]);
    }
    #endif
 
    int sp = 0;
 
    S_PRODUCT(vec1, vec2, sp, n);
    printf ("The scalar product is: %d\n", sp);
    
    return 0;
}