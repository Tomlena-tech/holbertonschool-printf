#ifndef _PRINTF.H
#define _PRINTF.H

/* _printf.h - Header fichier d'en tête pour la fonction Printf */

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_number(unsigned int n);

int _putchar(char c);
#endif
