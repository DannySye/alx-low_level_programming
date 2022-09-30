#include "main.h"
#include <stddef.h>

/**
*_strpbrk - called function
*@s: string
*@accept: string
*Return: NULL
*/
char *_strpbrk(char *s, char *accept)
{
	char *m;
	int n, p;

	while ((n = *s++) != 0)
	{
		for (m = accept; (p = *m++) != 0;)
			if (p == n)
				return ((char *)(s - 1));
	}
	return (NULL);
}
