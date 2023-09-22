#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct structprint - struct specifier
 * @q: method to translate data
 * @u: print function
 * Return: an integer
 */
typeof struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structure;
int _putchar(char ch);
int print_unsign(char *format, va_list);
int _puts(char *string);
int printocta(char *format, va_list);
int printc(char *format, va_list);
int printHEX(char *format, va_list);
int printstr(char *format, va_list);
int printhex(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int printpercent(char *format, va_list pa);
int _printf(char *format, ...);
int _abs(int number);
int printint(char *format, va_list pa);
int contadordigit(int number);
int integer(int number);

#endif
