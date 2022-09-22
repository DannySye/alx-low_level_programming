#include "main.h"

/**
*_strcat - this concatinates a string
*@dest: this is the first character
*@src: this is the second character
*Return: pointer to resulting dest
*/
char *_strcat(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (n >= 0)
	{
		dest[m] = src[n];
		if (src[n] == '\0')
			break;
		m++;
		n++;
	}
	return(dest);
}
