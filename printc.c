#include "main.h"

/**
 * printc - prints char.
 * @pa: char format.
 * @format: format
 * Return: number of char.
 */
int printc(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
