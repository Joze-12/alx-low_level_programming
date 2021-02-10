#include "holberton.h"

/**
  * _isalpha - Checks if a character is alphabetic or not
  * @check_char: The character to be checked.
  *
  * Return: 1 if character is letter, lowercase or uppercase
  */
int _isalpha(int check_char)
{
	if ((check_char >= 'a' && check_char <= 'z') ||
	    (check_char >= 'A' && check_char <= 'Z'))
		return (1);
	else
		return (0);
}
