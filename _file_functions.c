#include "_printf.h"
#include <stdarg.h>

/**
 * print_char - Imprime un caractère
 * @args: les arguments.
 * Return: Le caractère imprimé
 */

 int print_char(va_list args)
{
    _putchar(va_arg(args, int));
    return (1);
}

/**
 * print_str - Imprime une chaîne de caractères
 * @args: les arguments.
 *
 * Return: le nombre de caractères imprimés
 */

int print_str(va_list args)
{
	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}