#include <stdio.h>

/**
*main - base16 test
*
*Return: Always 0 (success)
*/
int main(void)
{
	int i;
	char c;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}


