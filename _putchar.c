#include <unistd.h>

/**
 * _putchar - prints char to stdout
 * @c: the char to be printed
 * @k: the count (for length)
 *
 * Return: 1 (Success) -1 (Error)
 */

int _putchar(char c, int *k)
{
	*k += 1;
	return (write(1, &c, 1));
}
