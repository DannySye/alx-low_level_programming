#include "main.h"
#include <stdio.h>

/**
*
*
*Return:Always 0
*/
int _supper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
