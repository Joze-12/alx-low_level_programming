#include "holberton.h"

/**
  * *leet - encodes a string to 1337.
  * @str: The string to be encoded.
  *
  * Return: A pointer to the encodes string.
  */
char *leer(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index 2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			    str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}
		index1++;
	}

	return (str);
}
