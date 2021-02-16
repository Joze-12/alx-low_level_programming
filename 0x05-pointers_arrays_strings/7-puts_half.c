#include "holberton.h"

/**
  * puts_half - Prints half of a string.
  * @str: The string to be printed
  */
void puts_half(char *str)
{
	int index = 0, len = 0, n;
<<<<<<< HEAD

=======
	
>>>>>>> 9783f5aacb40f0f83baa02c65f7dd22f6a72cc05
	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
