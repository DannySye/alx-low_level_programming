#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - funtion for array iteration
 *@array: array for iteration
 *@size: size of array
 *@action: action function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array != 0 && size >= 1 && action != 0)
	{
		for (counter = 0; counter < size; counter++)
		{
			action(array[counter]);
		}
	}
}
