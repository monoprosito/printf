#include "../holberton.h"
#include <stdio.h>

int main(void)
{
_printf("hola");
printf("\n");
_printf("hola %c", 'H');
printf("\n");
_printf("%c", 'O');
printf("\n");
_printf("hola %s", "mundo");
printf("\n");
_printf("%s", "Hola mundo");
printf("\n");
_printf("%c%s", 'L', "C y S juntos");
printf("\n");
_printf("hola %c mundo", 'Y');
printf("\n");
_printf("%e");
printf("\n");
return (0);
}
