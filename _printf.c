#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	int c, j, k;
	char *s;

	va_list(list);
	va_start(list, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(list, int);
				for (j = 0; j < format[i]; j++)
				{
					_putchar(c);
					break;
				}
				break;
			case 's':
				s = va_arg(list, char *);
				for (k = 0; *(s + k); k++)
				{
					_putchar(*(s + k));
				}
				break;
			default:
				break;
		}
		len++;
		i++;
	}
	va_end(list);
	return (len);

