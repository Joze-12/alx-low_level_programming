#include "holberton.h"

/**
  * _strcpy - Copies a string pointed to by src to dest
  * @dest: A buffer to the string to.
  * @src: The source string to copy.
  *
  * Return: A pointer to the destination string @dest.
  */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
