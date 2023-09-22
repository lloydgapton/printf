#include "main.h"

/**
 * printstr- print string.
 * @format: string format.
 * @pa: gtgtg
 * Return: number of string
 */
int printstr(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int contador;
	(void)format;

	if (string == NULL)
		string = "(null)";
	contador = _puts(string);
	return (contador);
}
