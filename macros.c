/*
 *  A macro is an example of preprocessor directive - more like text replacers
 *  Significance of # (hash) -
 */

#include <stdio.h>
#define PI 3.234433
#define SQR(X) X*X
#define VER1 1

int main(){

    double area_of_circle = PI * 23 * 23;
    printf("Area=%lf", area_of_circle);

    int n = SQR(23);
    printf("\nAmount=%d\n", n);

#define a 20
    printf("%d", a);

#undef VER1

#ifdef VER1
    printf("This is a sample demo");
#endif

#if VER1 == 1
    printf("This is version one, the correct version\n")
#endif

    //    Here are some pre-defined macros
    printf("File %s\n", __FILE__);
    printf("Date %s\n", __DATE__);
    printf("Time %s\n", __TIME__);
    printf("Line %s\n", __LINE__);
    printf("ANSI %s\n", __STDC__);

    return (0);
}