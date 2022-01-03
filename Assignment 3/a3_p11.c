/*
  CH-230-A
  a3_p11.c
  Flavia Tasellari
  ftasellari@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
 
int main() {
    char one[100], two[100], third[100], conc[200], c;
 
    /* Read strings */
    fgets(one, sizeof(one), stdin);
    fgets(two,sizeof(two),stdin);
 
    scanf("%c", &c);
    printf("length1=%lu\n", strlen(one)-1);
    printf("length2=%lu\n", strlen(two)-1);
 
    int i,j;
    
    for (i = 0; i < strlen(one)-1; i++) {
        conc[i] = one[i];
    } 
    
    i = strlen(one)-1;
    
    for (j = 0; two[j] != '\n'; j++, ++i) {
        conc[i] = two[j];
    }
    
    conc[i] = '\0';
    /* Print the concatenation of one with two */
    printf("concatenation=%s\n", conc);
    
    for (i = 0; i < strlen(two); i++) {
        third[i] = two[i];
    }
    
    third[i] = '\0';
    printf("copy=%s", third);
    
    /* Compare the two strings */
    if (strcmp(one,two)>0) {
        printf("one is larger than two\n");
    }
    else if (strcmp(one,two) <0) {
        printf("one is smaller than two\n");
    }
    else {
        printf("one is equal to two\n");
    }
 
    int k, l = 0;
 
    /* If the character is contained in the string */
    for (k = 0; k < strlen(two); k++) {
        if (two[k]==c) {
            printf("position=%d\n",k);
        l++;
        break;
        }
    }
    
    /* If the character is not contained in the string */
    if (l == 0) {
        printf("The character is not in the string\n");
    }
 
    return 0;
}