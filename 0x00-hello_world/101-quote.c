#include <stdio.h>
#include <unistd.h>

/**
 * main - Uaing the putchar function
 * Return: Always 0
 *
 */
int main(void)
{
	char str[] = "and the piece of art is useful\" - Dora Korpar, 2015-10-19,\n";

	write(2, str, 59);
	return (1);
}
