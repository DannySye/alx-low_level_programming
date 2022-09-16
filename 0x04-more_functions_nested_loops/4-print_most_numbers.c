#include "main.h"

/**
*print_most_numbers - this is to print most numbers except 2 and 4
*
*Return: No return here
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	if (i != 50 && i != 52)
	{
		_putchar(i);
	}
	}
	_putchar('\n');
}
