#ifndef _PRINTF_H
#define _PRINTF_H

/* _printf_h - Header fichier d'en tête pour la fonction Printf */

#include <stdarg.h>
#include <unistd.h>

typedef struct format_func
{
    char specifier;
    int (*f)(va_list);
} format_func_t;

int _printf(const char *format, ...);
int (*get_func(const char *specifier))(va_list);

int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_number(unsigned int n);

int _putchar(char c);
#endif
