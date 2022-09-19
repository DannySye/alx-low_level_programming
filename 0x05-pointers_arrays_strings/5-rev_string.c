#include "main.h"

/**
*rev_string - this is the code block
*@s: the charater
*/
void rev_string(char *s)
{
	int sed = 0, red = 0;
	char use;

	while (s[red++])
		sed++;

	for (red = sed - 1; red >= sed / 2; red--)
	{
		use = s[red];
		s[red] = s[sed - red - 1];
		s[sed - red - 1] = use;
	}
}
