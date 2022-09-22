#include "main.h"

/**
*_strcmp - called function body
*@s1: string 1
*@s2: string 2
*Return: b
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = s1[0] - s2[0];

	while (diff == 0)
	{
		if (s1[1] == '\0')
			break;
		i++;
		diff = s1[i] - s2[i];
	}
	return (diff);
}
