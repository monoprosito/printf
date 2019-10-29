#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _validate - evaluate if each character of the string format is correct
 * @str_format: character
 *
 * Return: -1 if error or 0 success
 */
int _validate(const char *str_format)
{
	int i = 0;

	if (str_format == NULL)
		return (-1);

	while (str_format[i])
	{
		if (str_format[i] == '%' && str_format[i + 1] == '\0')
			return (-1);

		i++;
	}

	return (1);
}
