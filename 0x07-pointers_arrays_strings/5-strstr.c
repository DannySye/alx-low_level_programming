#include "main.h"
#include <stddef.h>

/**
*_strstr - called function
*@naystack: char
*@needle: char
*Return: NULL
*/
char *_strstr(char *naystack, char *needle)
{
	char *a, *b;

	b = needle;
	if (b == 0)
	{
		return ((char *)naystack);
	}
	for (; *naystack != 0; naystack += 1)
	{
		if (*naystack != *b)
		{
			continue;
		}
		a = naystack;
		while (1)
		{
			if (*b == 0)
			{
				return ((char *)naystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (NULL);
}
