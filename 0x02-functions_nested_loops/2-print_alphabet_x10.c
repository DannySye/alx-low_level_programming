#include "main.h"

/**
*_alphabet_10x - print alphabet 10x
*
*Return: Not always zero
*/
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
	_putchar('\n');
	i++;
	}
}
