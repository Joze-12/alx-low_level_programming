#include <stdio.h>

/**
  * main - prints the numbers from 00 to 99
  *
  * Return: Always 0
  */
int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		for (second_digit = 0; second_digit < 10; second_digit++)
		{
			putchar((first_digit % 10) + '0');
			putchar((second_digit % 10) + '0');
			if (first_digit == 9 && second_digit == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
