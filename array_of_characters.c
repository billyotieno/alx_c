#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 * create array - function creates an array and initializes with a character
 * @size: this is the size of hte array
 * @c: this is the character
 * Return: character pointer to the created memory address
*/

char *create_array(unsigned int size, char c)
{
    char *a;
    unsigned int i;

    if (size == 0)
        return (NULL);

    a = malloc(size * sizeof(*a));
    if (a == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        a[i] = c;

    return (a);
}