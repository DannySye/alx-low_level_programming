#include <stdio.h>

/**
*main - This is for the alphabet
*
*Return: Always 0 (success)
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	printf("\n");
	return (0);
}
