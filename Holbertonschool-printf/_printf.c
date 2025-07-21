#include <stdarg.h>
#include "_printf.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: The values to format and print
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...);
{
	va_list args;
	int i = 0;

	va_start(args, format);

	if (format == NULL || !format[i + 1])
		return (-1);


	while (format[i])
	{

