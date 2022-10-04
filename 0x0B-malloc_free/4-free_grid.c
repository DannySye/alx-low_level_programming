#include "main.h"
#include <stdlib.h>

/**
 *free_grid - called function for the grid
 *@grid: integer value for the grid
 *@height: integer value for the height
 */
void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
