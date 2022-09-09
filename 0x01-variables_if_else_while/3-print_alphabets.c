#include <stdio.h>

/**
*main - This is the full alphabet
*
*Return: Always 0 (success)
*/
int main(void)
{
	char daa[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(daa[i]);
	}
	printf("\n");
	return (0);
}
