#include <stdio.h>

/**
  * main - Prints all arguments it receives.
  * @argc: The number of arguments
  * @argv: The string argument.
  *
  * Return: 0 On Success.
  */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return (0);
}
