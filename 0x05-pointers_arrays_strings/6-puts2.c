#include "holberton.h"

/**
  * puts2 - Prints every other character of a string.
  * @str: String to be printed
  */
void puts2(char *str)
{
	int len = 0;
	int index = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
