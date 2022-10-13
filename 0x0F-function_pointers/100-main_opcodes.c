#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of its own main function
 * @argc: counter argument
 * @argv: vector argument
 * Return: int
 */

int main(int argc, char **argv)
{
	int i, bytes;
	char *address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	address = (char *)main;
	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", address[i]);
	printf("%02hhx\n", address[i]);
	return (0);
}
