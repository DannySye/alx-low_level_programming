#include "main.h"

/**
*_pow_recursion - called function to the main
*@x: int x
*@y: int y
*Return: x and power of y
*/
int _pow_recursion(int x, int y)
{
	if (y != 0 && y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
