#ifndef _PRINTF.H
#define _PRINTF.H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printf_char(char c);
int _printf_char(char *s);

#endif
