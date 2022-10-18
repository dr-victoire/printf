#include "main.h"

/**
 * _putstring - prints a string
 * @str: the string to be printed
 * @k: the string count
 *
 * Return: Nothing
 */

void _putstring(char *str, int *k)
{
	if (str == NULL)
	{
		_putchar('n', k);
		_putchar('u', k);
		_putchar('l', k);
		_putchar('l', k);
	}

	while (*str)
	{
		_putchar(*str, k);
		str++;
	}
}
