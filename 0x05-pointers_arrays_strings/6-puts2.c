#include "main.h"

/**
*puts2 - prints every other character of a string
*@str:string character
*
*Return: success.
*/
void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[l] != '\0')
		l++;

	for (i = 0; i < l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
