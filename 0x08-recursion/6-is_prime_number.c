#include "main.h"

/**
*is_prime_number - called funtion to show a number is prime or not
*@n: interger
*Return: 1 or prime number
*/
int is_prime_number(int n)
{
	int i = 0;

	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i = i + 1;
		is_prime_number(n);
		return (1);
	}
}
