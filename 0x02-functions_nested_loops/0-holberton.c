#include "holberton.h"

/**
  * main - Prints "Holberton" followed by new line
  *
  * Return: Always 0
  */
int main(void)
{
	char string_val[9] = "Holberton";
	int counter = 0;

	while (counter < 9)
	{
		_putchar(string_val[counter]);
		counter++;
	}
	_putchar('\n');

	return (0);
}
