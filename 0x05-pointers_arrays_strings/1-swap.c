#include "main.h"

/**
*swap_int - this is the swap called function
*@a:This is int a
*@b:This is int b
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
