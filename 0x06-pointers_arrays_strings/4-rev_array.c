#include "main.h"

/**
*reverse_array - called function
*@a:variable a
*@n:variable b
*Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int m;
	int p;

	m = 0;
	n = n - 1;
	while (m < n)
	{
		p = a[m];
		a[m] = a[n];
		a[n] = p;
		m++;
		n--;
	}
}
