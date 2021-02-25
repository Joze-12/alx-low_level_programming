#include "holberton.h"

/**
  * _strlen_recursion - Returns the length of a string.
  * @s: The string to be counted.
  */
int _strlen_recursion(char *s)
{
	int str_len = 0;

	if (*s)
	{
		str_len++;
		str_len += _strlen_recursion(s + 1);
	}

	return (str_len);
}
