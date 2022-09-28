#include "main.h"
/**
*prime_number - second called function
*@n: integer
*@dive: integer
*Return: prime_number
*/
int prime_number(int n, int dive)
{
	if (n == dive)
	{
		return (1);
	}
	if (n % dive == 0)
	{
		return (0);
	}
	return (prime_number(n, dive + 1));
}
/**
*is_prime_number - first called function
*@n: integer
*Return: prime number
*/
int is_prime_number(int n)
{
	int dive = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_number(n, dive));
}
