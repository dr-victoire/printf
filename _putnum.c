#include "main.h"

/**
 * _putnum - prints a number to stdout
 * @n: the number to be printed
 * @k: the num count
 *
 * Return: Nothing
 */

void _putnum(int n, int *k)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-', k);
		i = -i;
	}
	if (i / 10)
		_putnum(i / 10, k);
	_putchar((i % 10) + '0', k);
}
