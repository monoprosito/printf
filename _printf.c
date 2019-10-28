#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - function my printf
 * @format: string whit format to print
 *
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int b = 0, length = 0;

	va_start(args, format);

	b = _validate(format);
	if (b == -1)
		return (b);

	length = _print_format(format, args);
	va_end(args);
	return (length);
}
