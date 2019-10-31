#include "../holberton.h"
#include <stdio.h>

/**
  * main - A main to tests %c and %s cases in _printf()
  * vs. printf()
  *
  * Return: Always zero.
  */
int main(void)
{
	int a = 0, b = 0;

	/* ========================= */
	/* 			%c CASES		 */
	/* ========================= */
	printf("======================\n");
	printf("****** c CASES ******\n");
	printf("======================\n");
	a = printf("Expected output:    %cAAA\n", 'a');
	b = _printf("Current output:     %cAAA\n", 'a');
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %cc\n", 'a');
	b = _printf("Current output:     %cc\n", 'a');
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %yd\n");
	b = _printf("Current output:     %yd\n");
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %c\n", 53);
	b = _printf("Current output:     %c\n", 53);
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %c\n", '\0');
	b = _printf("Current output:     %c\n", '\0');
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %%%c\n", 'y');
	b = _printf("Current output:     %%%c\n", 'y');
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);

	/* ========================= */
	/* 			%s CASES		 */
	/* ========================= */
	printf("======================\n");
	printf("****** s CASES ******\n");
	printf("======================\n");
	a = printf("Expected output:    %s\n", "Holberton");
	b = _printf("Current output:     %s\n", "Holberton");
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %s$\n", "");
	b = _printf("Current output:     %s$\n", "");
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %s\n", "hello, world");
	b = _printf("Current output:     %s\n", "hello, world");
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %s$\n", NULL);
	b = _printf("Current output:     %s$\n", NULL);
	printf("Expected length:    %i\n", a);
	printf("Current length:     %i\n", b);
	a = printf("Expected output:    %sschool\n", "Holberton");
	b = _printf("Current output:     %sschool\n", "Holberton");
	printf("Expected length:    %i\n", a);
	printf("Current length:     %i\n", b);

	/* ========================= */
	/* 			% CASES		 */
	/* ========================= */
	printf("===========================\n");
	printf("****** PERCENT CASES ******\n");
	printf("===========================\n");
	a = printf("Expected output:    %%\n");
	b = _printf("Current output:     %%\n");
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %%%%\n");
	b = _printf("Current output:     %%%%\n");
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	printf("Expected output:    ");
	a = printf("%");
	printf("\n");
	printf("Current output:     ");
	b = _printf("%");
	printf("\n");
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	return (0);
}
