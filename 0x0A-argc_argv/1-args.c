#include <stdio.h>

/**
  * main - Prints the number of arguments passed into it.
  * @argc: The number of arguments.
  * @argv: The string argument.
  *
  * Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
