#include <stdio.h>

/**
  * main - Prits its name.
  * @argc: The number of arguments supplied to the program.
  * @argv: An array of pointers to the arguments.
  *
  * Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}
