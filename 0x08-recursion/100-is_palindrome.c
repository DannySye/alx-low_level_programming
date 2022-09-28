#include "main.h"

/**
*_puts_recursion - called function
*@s: string to be printed out
*/
void _puts_recursion(char *s)
{
         if (*s)
         {
                 _putchar(*s);
                 _puts_recursion(s + 1);
         }
         else
         {
                 _putchar('\n');
         }
 
}

void _print_rev_recursion(char *s)
{
         if (*s == '\0')
         {
                return;
         }
         else
         {
                 _print_rev_recursion(s + 1);
                 _putchar(*s);
         }
}

int is_palindrome(char *s)
{
	if (_puts_recursion(s) == _print_rev_recursion(s))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
