#include "main.h"

/**
*string_toupper - called function
*@str:for the string
*Return: str
*/
char *string_toupper(char *st)
{
	int i;

	i = 0;
	while (st[i] != '\0')
	{
		if (st[i] >= 97 && st[i] <= 122)
		{
			st[i] = st[i] -32;
		}
		i++;
	}
	return (st);
}
