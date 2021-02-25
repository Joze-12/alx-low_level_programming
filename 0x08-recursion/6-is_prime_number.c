#include "holberton.h"

/**
  * is_divisible - Checks if a number is divisible.
  * @num: The number to be checked.
  * @div: The divsor.
  *
  * Return: 0 if num is divisible, else 1.
  */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
  * is_prime_number - Checks if a number is prime or not.
  * @n: the number to be checked.
  *
  * Return: 1 if the number is prime else 0.
  */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
