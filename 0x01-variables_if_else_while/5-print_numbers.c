#include <stdio.h>

/**
*main - A while loop
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%u", n);
		n++;
	}
	printf("\n");
	return (0);
}
