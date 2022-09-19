#include "main.h"

/**
*_strlen - this is to print the stringlen
*@i:
*@s:the string
*Return: is i
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}
