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
	int char_count = 0;

	va_start(args, format);

	if (format == NULL || !format[i + 1])
		return (-1);


	while (format[i])
	{
		if (format[i] == '%' && format[i = 1])
		{
			if (format[i + 1] != 'c' && format[i + 1] != 's')
			{
			char_count += _putchar(format[i]);
			char_count += _putchar(format[i + 1]);
			i++;
			}
			else
				{
					f = get_func(&format[i + 1]);
					j += f(args);
					i++;
				}
			}
		}
}
	va_end(args);
	return (j);
}
