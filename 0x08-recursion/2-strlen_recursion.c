#include "main.h"

/**
*_strlen_recursion - called function for string length
*@s: string
*Return: The string length formular
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
