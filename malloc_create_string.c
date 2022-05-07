#include <stdlib.h>
#include <stdio.h>
/**
 *
 * @param len - The length of the string to be created
 * @param c - Characters to create the string with
 * @return  character pointer to the array of characters
 */
char *create_string(int len, char c)
{

    char *s;
    int i;

    s = malloc((len + 1) * sizeof(char));
    if (s == NULL) {
        return (NULL);
    }
    i = 0;

    while (i < len){
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    return (s);

}

int main(void){

    char *s;

    s = create_string(5, 'H');
    printf(s);
}