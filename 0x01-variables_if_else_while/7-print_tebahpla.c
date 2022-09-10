#include <stdio.h>

/**
*main - reverse
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char dan[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(dan[i]);
	}
	putchar('\n');
	return (0);
}

