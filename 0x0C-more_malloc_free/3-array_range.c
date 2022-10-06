#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an integer array containing values
 * of the maximum and minumum
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ar;
	int con;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (con = 0; min <= max; con++, min++)
	{
		ar[con] = min;
	}

	return (ar);
}
