#include <stdio.h>

float sum(float a, float b) {return a + b; }
float subtract(float a, float b){ return a - b; }
float multiply(float a, float b){ return a * b; }
float divide(float a, float b){ return a / b; }

int main(void){

    float (*ptr2funcs[4])(float, float) = {sum, subtract, multiply, divide};
    int choice = 3;
    float c, d;

    c = 13.234242;
    d = 2344324.343423;

    printf("%f", ptr2funcs[choice](c, d));


    int operation;
    float a, b;
    float result;

    printf("%s\n", "Enter an operation you'd like to perform?");
    scanf("%d", &operation);

    printf("%s", "Enter the two numbers you'd like to operate on?");
    scanf("%f %f", &a, &b);

    switch (operation) {
        case 1: result = sum(a, b); break;
        case 2: result = subtract(a, b); break;
        case 3: result = multiply(a, b); break;
        case 4: result = divide(a, b); break;
    }

    printf("%s%f", "The result of the Operation is", result);

    return (0);
}