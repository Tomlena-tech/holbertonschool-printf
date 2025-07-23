#include <stdarg.h>
#include "_printf.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, index_funct = 0;
	int (*func)(va_list);

	format_func_t funcs[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{0, NULL}
	};

	va_start(args, format);

    while (format && format[i])
	{
        if (format[i] != '%')
    	{
            count += _putchar(format[i]);
            i++;
            continue;
        }

        i++;
        func = NULL;
        index_funct = 0;

        while (funcs[index_funct].specifier)
        {
    
            if (format[i] == funcs[index_funct].specifier)
            {
			func = funcs[index_funct].f;
			break;  
}
	index_funct++;
        }

        if (func)
        {
		count += func(args);  
	}
        else
        {
            count += _putchar('%');
            count += _putchar(format[i]);
		}
        i++;
    }

    va_end(args);
    return (count);
}