#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
  * struct specifiers - Struct specifiers
  * @specifier: The conversion specifier
  * @f: The function pointer
  */
typedef struct specifiers
{
	char *specifier;
	void (*f)(va_list args);
} spc_dt;

int _write(char c);
int _printf(const char *format, ...);
void _print_a_char(va_list args);
int _print_a_string(va_list args);
int _validate(const char *str_format);

#endif /* _HOLBERTON */
