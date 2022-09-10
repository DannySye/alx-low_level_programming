#include <stdio.h>

/**
*main - This is to display numberz
*
*Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
