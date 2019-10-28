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
		{"s", _print_a_string}
	};
	int count = 0, i = 0, c = 0, j = 0;

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_write(format[i]);
			count += 1;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				_write(format[i]);
				count += 1;
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
