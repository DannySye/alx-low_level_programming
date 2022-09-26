#include "main.h"

/**
*_strspn - called body
*@s: string
*@accept: character
*Return: s - m
*/
unsigned int _strspn(char *s, char *accept)
{
	char *m = s;
	char *n;

	while (*s)
	{
		for (n = accept; *n; n++)
		{
			if (*s == *n)
			break;
		}
		if (*n == '\0')
		break;
		s++;
	}
	return (s - m);
}
