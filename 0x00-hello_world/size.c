#include <stdio.h>

/**
*main - This is to show the sizes of the data types
*
*Retutn: Always 0 (Success)
*/
int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an int : %u\n", (unsigned long)sizeof(i));
	printf("The size of a double : %u\n", (unsigned long)sizeof(d));
	printf("The size of a char : %u\n", (unsigned long)sizeof(c));
	return (0);
}
