#include <stdlib.h>

/**
  * print_name - prints a name given a function
  * @name: pointer to print name
  * @f: function to print name
  */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
