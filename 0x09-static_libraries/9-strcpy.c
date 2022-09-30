#include "main.h"
#include <stdio.h>

/**
*_strcpy - copies a string
*@dest:Destination
*@src:source value
*
*Return: success
*/
char *_strcpy(char *dest, char *src)
{
	int h;

	for (h = 0; src[h] != '\0'; h++)
	{
		dest[h] = src[h];
	}

	dest[h++] = '\0';

	return (dest);

}
