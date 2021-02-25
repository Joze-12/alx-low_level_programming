#include "holberton.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y.
  * @x: The base
  * @y: The index
  *
  * Return: the result of x rased to the power of y if y is greater than 0
  *	    -1 if y is less than 0.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
