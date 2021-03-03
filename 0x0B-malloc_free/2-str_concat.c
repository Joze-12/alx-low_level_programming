#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - concatenates two strings.
  * @s1: The first string to be concatenated.
  * @s2: The second string to be concatenated.
  *
  * Return: pointer to new string, or NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	int str1Size = 0, str2Size = 0;
	char *concatenate, *concStart;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + str1Size))
		str1Size++;
	while (*(s2 + str2Size))
		str2Size++;
	concatenate = malloc(sizeof(char) * (str1Size + str2Size + 1));
	if (concatenate == NULL)
		return (NULL);
	concStart = concatenate;
	while (*s1)
		*concatenate++ = *s1++;
	while (*s2)
		*concatenate++ = *s2++;
	*concatenate = '\0';

	return (concStart);
}
