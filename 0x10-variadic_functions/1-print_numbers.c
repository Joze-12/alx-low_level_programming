#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <unistd.h>
void print_number(int n);

/**
  * print_numbers - prints out numbers from variadic function
  * @separator: pointer to separation string
  * @n: number of numbers to print
  * @...: numbers to print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int cur_num;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		cur_num = va_arg(nums, int);
		print_number(cur_num);
		if (separator == NULL || *separator == '\0')
			continue;
		if (i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(nums);
}
/**
  * print_number - print number n with putchar
  * @n: number to print
  */
void print_number(int n)
{
	printf("%d", n);
}
