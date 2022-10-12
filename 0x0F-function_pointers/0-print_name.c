#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - called function that prints the name
 *name: name to ne printed
 *char: character to printed
 *f: function poiner to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
