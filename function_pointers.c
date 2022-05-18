#include <stdio.h>


int add(a, b){
    return a + b;
}

int main(){

//    int (*ptr)[10] = A pointer to an array of 10 integers
//    int *ptr[10] = An array of 10 integer pointers
//    A pointer to the add function
//    int (*ptr)(int, int); <- This is the best Prototype

    int (*ptr)(int, int) = &add;
//    int (*ptr)(int, int) = add; -- A similar way for passing the address of a function

    printf("%d", ptr(20, 20));

    printf("%s\n", "My name is Billy Otieno");
    printf("%d", add(23, 23));

    return (0);

}