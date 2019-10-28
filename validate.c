#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _evaluate - evaluate if each character of the string format is correct
 * @str_format: character
 *
 */


void _evaluate(const char *str_format)
{
	char array_type[2] = {'c', 's'};
	int i = 0, j = 0, flag_a = 0;

	if ((str_format != NULL) && (str_format[i] == '\0'))
		exit(10);
	while (str_format[i] != '\0')
	{
		if (str_format[i] == '%')
		{
			while (array_type[j])
			{
				if (str_format[i + 1] == array_type[j])
					flag_a = 1;
				j++;
			}
			if (flag_a == 0)
				exit(11);
			flag_a = 0;
			j = 0;
		}
		i++;
	}
}
