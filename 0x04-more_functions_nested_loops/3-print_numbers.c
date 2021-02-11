#include "holberton.h"

/**
  * print_numbers - Prints the numbers from 0 - 9
  */
void print_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		_putchar((num % 10) + '0');
		num++;
	}
	_putchar('\n');
}
