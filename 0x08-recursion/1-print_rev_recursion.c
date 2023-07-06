#include "main.h"

/**
 * _prints_rev_recursion -  prints a string in reverse.
 * @s: the string to be printed
 *
 * Return: Nothing on success.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}
}
