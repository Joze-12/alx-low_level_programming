#include "holberton.h"

/**
  * times_table - Prints the 9 times table
  */
void times_table(void)
{
	int num, fact, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (fact = 1; fact <= 9; fact++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * fact;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
