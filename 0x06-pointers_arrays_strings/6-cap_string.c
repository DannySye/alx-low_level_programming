#include "main.h"

/**
*cap_string - called function
*@s: called string
*Return: s
*/
char *cap_string(char *s)
{
	int i = 0, j;
	int lc[] = {97, 101, 111, 116, 108};
	int cp[] = {65, 69, 79, 84, 76};
	int m[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lc[j] || s[i] == cp[j])
			{
				s[i] = m[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
