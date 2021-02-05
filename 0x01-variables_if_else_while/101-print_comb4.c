#include <stdio.h>

/**
  * main - Prints all possible different combinations of three digits
  *
  * Return: Always 0.
  */
int main(void)
{
	int f_digit;
	int s_digit;
	int t_digit;

	for (f_digit = 0; f_digit < 10; f_digit++)
	{
		for (s_digit = 0; s_digit < 10; s_digit++)
		{
			for (t_digit = 0; t_digit < 10; t_digit++)
			{
				if (!(f_digit >= s_digit || s_digit >= t_digit))
				{
					putchar((f_digit % 10) + '0');
					putchar((s_digit % 10) + '0');
					putchar((t_digit % 10) + '0');
					if (f_digit == 7 && s_digit == 8 && t_digit == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
