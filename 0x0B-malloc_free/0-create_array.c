#include "main.h"
#include <stdlib.h>
/**
 *create_array - called function to create array
 *
 *@size: size of array
 *
 *@c: char
 *
 *Return: Always 0
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int counter = 0;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(*str) * size);
	if (str != NULL)
	{
		while (counter < size)
		{
			str[counter] = c;
			counter++;
		}
	}
	return (str);
}
