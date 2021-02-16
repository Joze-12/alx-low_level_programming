#include "holberton.h"

/**
  * swap_int - Swaps the values of two integers
  * @a: One of the value to be swaped
  * @b: The other value to be swaped
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
