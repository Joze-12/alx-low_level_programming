#include "holberton.h"

/**
  * print_line - Draws a straight line using the character '_'
  * @n: The number of _ characters to be printed
  */
void print_line(int n)
{
	int char_len;

	if (n > 0)
	{
		for (char_len = 0; char_len < n; char_len++)
			_putchar('_');
	}
	_putchar('\n');
}
