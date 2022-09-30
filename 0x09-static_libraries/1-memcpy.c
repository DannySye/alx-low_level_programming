#include "main.h"

/**
*_memcpy - memory copy
*@src:source
*@dest: destination
*@n: byte number
*Return: destonation
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
