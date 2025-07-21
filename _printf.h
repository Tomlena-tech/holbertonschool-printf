#ifndef _PRINTF.H
#define _PRINTF.H

/* _printf.h - Header fichier d'en tête pour la fonction Printf */

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printf_char(char c);
int _printf_char(char *s);
int _putchar(char c);
#endif
