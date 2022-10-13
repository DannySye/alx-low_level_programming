#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - calling function that prints searched in the array
 * @array: array to search from
 * @size: size of the array
 * @cmp: function for the array
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && cmp != 0)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
