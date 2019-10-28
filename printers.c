#include "holberton.h"
#include <stdlib.h>

/**
  * _print_a_char - Prints a char
  * @args: A list of variadic arguments
  *
  * Return: Nothing
  */
void _print_a_char(va_list args)
{
	_write(va_arg(args, int));
}

/**
  * _print_a_string - Prints a string
  * @args: A list of variadic arguments
  *
  * Return: Nothing
  */
void _print_a_string(va_list args)
{
	char *arg = va_arg(args, char *);
	int i = 0;

	if (arg != NULL)
	{
		while (arg[i])
		{
			_write(arg[i]);
			i++;
		}
	}
	else
	{
		_write('(');
		_write('n');
		_write('u');
		_write('l');
		_write('l');
		_write(')');
	}
}

