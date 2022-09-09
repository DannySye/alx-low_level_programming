#include <stdio.h>

/**
*main - This is for the letters
*
*Return:Always 0 (success)
*/
int main(void)
{
	char dan[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(dan[i]);
	}
	printf("\n");
	return (0);
}
