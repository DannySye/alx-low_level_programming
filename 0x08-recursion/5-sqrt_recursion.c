#include "main.h"

/**
*sqrt_number - first called function
*@n: integer
*@m: integer
*Return: m and n
*/
int sqrt_number(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (sqrt_number(n, m + 1));
}
/**
*_sqrt_recursion - second called function
*@n: integer
*Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_number(n, 0));
}
