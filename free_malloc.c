#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n;
    char *ar;

    n = 5;
    ar = malloc(n * sizeof(char));

    ar[0] = "C";
    ar[1] = "D";
    ar[2] = "A";
    ar[3] = "U";
    ar[4] = "\0";

    printf("%s\n", ar);
    free(ar);
    return (0);
}