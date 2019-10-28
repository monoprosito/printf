#include "holberton.h"
#include <stdlib.h>

void _print(unsigned int n, ...);

int main(void)
{
	_print(3, NULL, ", ", "Holberton");
	return (0);
}

void _print(unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		_print_a_string(args);
		i++;
	}

	_write('\n');
	va_end(args);
}

