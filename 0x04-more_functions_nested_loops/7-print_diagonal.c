#include "main.h"

/**
*print_diagonal - This will print diagonal
*@n:int
*/
void print_diagonal(int n)
{
	int m, d;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (d = 0; d < m; d++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
