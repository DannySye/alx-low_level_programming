#include "main.h"
#include <stdio.h>

/**
*main - called function
*@argc: int
*@argv: char
*Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
