#include "holberton.h"
#include <stdlib.h>

/**
  * _print_format - Prints a format
  * @format: The format to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the format
  */
int _print_format(const char *format, va_list args)
{
	spc_dt _types[] = {
		{"c", _print_a_char},
		{"s", _print_a_string},
		{NULL, NULL}
	};
	int count = 0, i = 0, c = 0, j = 0;

	while (format && format[i])
	{
		if (format[i] != '%')
			count += _write(format[i]);
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			while (format[i] == ' ')
			{
				i++;
			}
			if (format[i] == '%')
				count += _write(format[i]);
			if (format[i] != 'c' && format[i] != 's' && format[i] != '%')
			{
				count += _write('%');
				if (format[i - 1] == ' ')
				{
					count += _write(' ');
					count += _write(format[i]);
				}
				else
					count += _write(format[i]);
			}
			else
			{
				while (_types[j].specifier)
				{
					if (*_types[j].specifier == format[i])
					{
						c = _types[j].f(args);
						count += c;
					}
					j++;
				}
				j = 0;
			}
		}
		i++;
	}

	return (count);
}
