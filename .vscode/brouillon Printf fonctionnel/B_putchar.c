#include <unistd.h>

/**
 * _putchar - Écrit le caractère c sur la sortie standard
 * @c: Le caractère à écrire
 *
 * Return: 1 si succès, -1 si erreur
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
