#include "holberton.h"

/**
  * *_memcpy - Copies memory area.
  * @dest: A pointer to the memory area to copy @src into.
  * @src: The source buffer to coppy character from.
  * @n: The number of bytes to copy from @src.
  *
  * Return: A pointer to tthe destination buffer @dest.
  */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const  unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
