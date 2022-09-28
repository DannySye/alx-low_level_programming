#include "main.h"

/**
*_puts_recursion - called function
*@s: string to be printed out
*/
void _puts_recursion(char *s)
{
	int i = 0;

	while (*s)
	{
		_putchar(*s++);
		i++;
	}
	_putchar('\n');
}
