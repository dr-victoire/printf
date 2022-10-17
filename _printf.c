#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a char string
 *
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
	int i = 0, len = 0, c, j, k;
	char *s;

	va_list(list);
	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			continue;
		}
		format++;
		switch (format[i])
		{
			case 'c':
				c = va_arg(list, int);
				_putchar(c);
				break;
			case 's':
				s = va_arg(list, char *);
				_putchar(s);
				break;
			case '%':
				_putchar('%');
				break;
			default:
				_putchar('%');
				_putchar(format);
		}
		len++;
		i++;
	}
	return (len);
}
