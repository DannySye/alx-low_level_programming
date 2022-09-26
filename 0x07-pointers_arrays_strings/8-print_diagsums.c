#include "main.h"
#include <stdio.h>

/**
*print_diagsums - called function
*@a: char
*@size: integer
*/
void print_diagsums(int *a, int size)
{
	int m, add1 = 0, add2 = 0;

	for (m = 0; m < size; m++)
	{
		add1 = add1 + *(a + (size * m + 1));
		add2 = add2 + *(a + (size * m + size - 1 - m));
	}
	printf("%d, ", add1);
	printf("%d\n", add2);
}
