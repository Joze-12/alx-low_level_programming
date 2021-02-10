#include "holberton.h"

/**
  * _islower - Checks if a character is lowercase.
  * @check_char: The character to be checked.
  *
  * Return: 1 if character is lowercase, 0 otherwise.
  */
int _islower(int check_char)
{
	if (check_char >= 'a' && check_char <= 'z')
		return (1);
	else
		return (0);
}
