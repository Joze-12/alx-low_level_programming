#include "holberton.h"

/**
  * factorial - Returns the factorial of a given number.
  * @n: The number which the factorial is to be found.
  *
  * Return: The factorial of n if n is greater than or equal to zero
  *         -1 if n is lower than 0.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
