#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - creates a new dog.
  * @name: name to assigne for the dog
  * @age: age to assign for the dog
  * @owner: owner of the dog
  *
  * Return: pointer to new dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);
	if (name == NULL)
		new_d->name = NULL;
	else
	{
		new_d->name = malloc(_strlen(name) + 1);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->name = _strcpy(new_d->name, name);
	}
	if (owner == NULL)
		new_d->owner = NULL;
	else
	{
		new_d->owner = malloc(_strlen(owner) + 1);
		if (new_d->owner == NULL)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		new_d->owner = _strcpy(new_d->owner, owner);
	}
	new_d->age = age;
	return (new_d);
}
/**
  * _strlen - gets len of string
  * @s: The string to be counted
  *
  * Return: length of s
  */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * _strcpy - copies string
  * @dest: pointer to destination of string
  * @src: pointer to source of string
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
