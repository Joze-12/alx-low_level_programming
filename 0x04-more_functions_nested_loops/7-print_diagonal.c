#include "holberton.h"

/**
  * print_diagonal - Drwas a digonal line
  * @n: the number of characters to be printed
  */
void print_diagonal(int n)
{
	int char_len, space;

	if (n > 0)
	{
		for (char_len = 0; char_len < n; char_len++)
		{
			for (space = 0; space < char_len; space++)
				_putchar(' ');
			_putchar('\\');

			if (char_len == n - 1)
				continue;
			_putchar('\n');
		}
	}
}
