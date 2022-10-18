#include "main.h"

/**
 * _printf - produes an output according to a format
 * @format: the character string
 *
 * Return: The number of chars printed
 */

int _printf(const char *format, ...)
{
	const char *p;
	int c, k = 0;
	char *str;

	va_list(list);
	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p, &k);
			continue;
		}
		p++;
		switch (*p)
		{
			case 'c':
				c = va_arg(list, int);
				_putchar(c, &k);
				break;
			case 's':
				str = va_arg(list, char *);
				_putstring(str, &k);
				break;
			case '%':
				_putchar('%', &k);
				break;
			default:
				break;
		}
	}

	va_end(list);
	return (k);
}
