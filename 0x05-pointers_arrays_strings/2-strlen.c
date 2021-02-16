#include "holberton.h"

/**
  * _strlen - Returns the length of a string.
  * @s: The string to be counted
  *
  * Return: Lenght of a string
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
