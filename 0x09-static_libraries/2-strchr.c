#include "main.h"

/**
*_strchr - string locator
*@s: string
*@c: character
*Return: Always 0
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return (0);
}
