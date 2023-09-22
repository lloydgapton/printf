#include "main.h"
/**
 * _printf - recreates the printf funct
 * @format: format specifier
 * Return: number of chars printed
 */

int _printf(char *format, ...)
{
	int written = 0, (structype)(char *, va_list);
	char q[3];
	va_list pa;

	if (format == NULL)
		return (-1);
	q[2] = '\0';
	va_start(pa, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structure = driver(format);
			if (structure)
			{
				q[0] = '%';
				q[1] = format[1];
				written += structure(q, pa);
			}
			else if (format[1] != '\0')
			{
				written += _putchar('%');
				written += _putchar(format[1]);
			}
			else
			{
				written += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			written += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (written);
}