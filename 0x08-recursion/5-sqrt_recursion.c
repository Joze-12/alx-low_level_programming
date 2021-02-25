#include "holberton.h"

/**
  * sqrt_result - finds the natural square root of a number.
  * @num: The number to be evaluated.
  * @root: The root to be checked.
  *
  * Return: The square root if the number has natural square root, else -1.
  */
int sqrt_result(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (sqrt_result(num, root + 1));
}

/**
  * _sqrt_recursion - Returns the natural square root of a number.
  * @n: the square root to be found.
  *
  * Return: Square root of n if n have natural sqaure root,
  *         -1 if it does not have.
  */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (sqrt_result(n, root));
}
