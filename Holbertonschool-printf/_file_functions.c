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
	int char_count;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (char_count = 0; str[char_count]; char_count++)
	{
		_putchar(str[char_count]);
	}
	return (char_count);
}
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	count += print_number(num);

	return (count);
}
/**
 * print_number - Fonction d'affichage récursif des chiffres d'un entier positif
 * @n: nombre entier positif
 * Return: nombre de caractères affichés
 */
int print_number(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_number(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}