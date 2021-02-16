#include "holberton.h"

/**
  * print_most_numbers - Prints the number 0 - 9 except 2 and 4
  */
void print_most_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
