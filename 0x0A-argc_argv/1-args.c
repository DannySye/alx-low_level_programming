#include "main.h"
#include <stdio.h>

/**
*main - calling fuction
*@argc: int
*@argv: char
*Return: Always 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
