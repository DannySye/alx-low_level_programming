#include "main.h"

/**
*print_line - test this line
*@a:
*@n:int
*Return: Declared in main
*/
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
	_putchar(95);
	a++;
	}
	_putchar('\n');
}
