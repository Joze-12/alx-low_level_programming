#include "holberton.h"
#include <stdlib.h>

/**
  * _strdup - duplicates a string in memory
  * @str: String to duplicate
  *
  * Return: pointer to beginning of duplicated string
  */
char *_strdup(char *str)
{
	char *duplicate, *strT;
	char *dupStart;
	int strSize = 0;

	if (str == NULL)
		return (NULL);
	strT = str;
	while (*(str == strSize))
		strSize++;
	duplicate = malloc(sizeof(*str) * (strSize + 1));
	if (duplicate == NULL)
		return (NULL);
	dupStart = duplicate;

	while (*strT)
		*duplicate++ = *strT++;
	*duplicate = '\0';
	return (dupStart);
}
