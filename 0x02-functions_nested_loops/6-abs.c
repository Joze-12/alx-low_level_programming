#include "holberton.h"

/**
  * _abs - Computes the absolute valeu.
  * @num: The number to be checked
  *
  * Return: The absolute value of the integer.
  */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
