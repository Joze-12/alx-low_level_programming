#include "holberton.h"

/**
  * _isalpha - Checks if a character is alphabetic or not
  * @check_char: The character to be checked.
  *
  * Return: 1 if character is letter, lowercase or uppercase
  */
int _isalpha(int check_char)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
