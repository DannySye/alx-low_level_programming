#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - called function for the grid
 *@width: int width
 *@height: int height
 *Return: double pointer
 */
int **alloc_grid(int width, int height)
{
	int **k, l, m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	k = malloc(sizeof(int *) * height);
	if (k == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < height; l++)
	{
		k[l] = malloc(sizeof(int) * width);

		if (k[l] == NULL)
		{
			for (; l >= 0; l--)
			{
				free(k[l]);
			}
			free(k);
			return (NULL);
		}

		for (m = 0; m <= width; m++)
		{
			k[l][m] = 0;
		}
	}
	return (k);
}
