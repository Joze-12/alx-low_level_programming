#include "holberton.h"

/**
  * puts_half - Prints half of a string.
  * @str: The string to be printed
  */
void puts_half(char *str)
{
	int len = 0;
	int index = 0;

	while (str[index++])
		len++;

	for (index = len / 2; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
