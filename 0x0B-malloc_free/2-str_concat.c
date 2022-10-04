#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @s: character
 * Return: string length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
 *str_concat - caoncats two strings
 *@s1: string one
 *@s2: string two
 *Return: conc
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int k1, k2;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	else
		k1 = _strlen(s1);
	if (!s2)
		s2 = "";
	else
		k2 = _strlen(s2);

	conc = malloc(k1 + k2 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (conc);
}
