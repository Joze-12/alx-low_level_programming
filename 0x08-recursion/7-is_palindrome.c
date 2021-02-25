#include "holberton.h"

/**
  * str_len - Returns the length of a string.
  * @s: The string to be counted.
  *
  * Return: The length of s.
  */
int str_len(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += str_len(s + len);
	}

	return (len);
}

/**
  * palindrome_check - Checks if a string is a palindrome.
  * @s: The string to be checked.
  * @len: the length of s.
  * @index: The index of the string.
  *
  * Return: 1 if s is string, else 0.
  */
int palindrome_check(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (palindrome_check(s, len, index + 1));

	return (0);
}

/**
  * is_palindrome - Checks if a string is a palindrome.
  * @s: the string to be checked.
  *
  * Return: 1 if it is palindrome, else 0.
  */
int is_palindrome(char *s)
{
	int index = 0;
	int len = str_len(s);

	if (!(*s))
		return (1);

	return (palindrome_check(s, len, index));
}
