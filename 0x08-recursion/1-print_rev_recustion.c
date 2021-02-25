#include "holberton.h"

/**
  * _print_rev_recursion - Prints a strint in reverse.
  * @s: The strint to be reversed.
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
