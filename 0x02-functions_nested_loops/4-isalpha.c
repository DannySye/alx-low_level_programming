#include "main.h"

/**
*_isalpha - This is the body
*
*Return: Always 0 and 1
*
*@c: This is an ASCII code
*/
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
