#include "main.h"

/**
*factorial - creating factorial
*@n: interger n
*Return: 1, -1 and n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
