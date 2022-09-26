#include "main.h"
#include <stdio.h>

/**
*print_diagsums - called function
*@a: char
*@size: integer
*/
void print_diagsums(int *a, int size)
{
	int m, d1 = 0, d2 = 0;

	for (m = 0; m < size; m++)
	{
		d1 += *(a + (size * m + m));
		d2 += *(a + (size * m + size - 1 - m));
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
