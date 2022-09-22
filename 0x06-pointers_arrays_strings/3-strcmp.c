#include "main.h"

/**
*_strcmp - called function body
*@s1: string 1
*@s2: string 2
*Return: b
*/
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[b];
		a++;
	}
	return(b);
}
