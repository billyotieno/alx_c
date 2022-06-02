#ifndef BILLBRUCE_H
#define BILLBRUCE_H
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <stdbool.h>

/* macros */

#define FLUSH -1
#define PF_INIT {false, false, false}
#define NIL "(nil)"
#define HEXA "0x"
#define NULL_STRING "(null)"
#define NUL '\0'
#define KILOBYTE 1024
#define ABS(x) (((x) <  0) ? -(x) : (x))

/**
 * struct modifiers - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct modifiers
{
    _Bool plus;
    _Bool space;
    _Bool hash;
} modifs;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct functionHandler
{
    char c;
    int (*f)(va_list ap, modifs *f);
} fh;

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*fetch_print(char s))(va_list, modifs *);

/* get_flags */
int get_flags(char s, modifs *f);

/* print_alpha */
int print_string(va_list l, modifs *f);
int print_char(va_list l, modifs *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_percent */
int print_percent(va_list l, modifs *f);

/* assertions */
_Bool invalidInputs(const char *p);

#endif