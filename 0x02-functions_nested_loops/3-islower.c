#include "main.h"

/**
*_islower - is lower
*
*Return: 1 is the first
*@c:This is an ASCII code
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
