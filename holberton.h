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

#endif /* _HOLBERTON */
