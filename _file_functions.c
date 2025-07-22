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
int print_percent(va_list args)
{
	(void)args;  // Ignore l'argument si il n'est pas utilsé
	_putchar('%');
	return (1);
}
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	if (num / 10)
		count += print_int((va_list)&num / 10);
	_putchar(num % 10 + '0');
	return (count + 1);
}
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num / 10)
		count += print_unsigned((va_list)&num / 10);
	_putchar(num % 10 + '0');
	return (count + 1);
}