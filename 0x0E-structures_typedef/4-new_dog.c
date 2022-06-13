#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copy a string
 * @s: string to copy
 * Return: pointer
 */
char *_strcpy(char *s)
{
	int i;
	char *p;

	for (i = 0; s[i]; i++)
		;
	p = malloc(i + 1);
	if (p)
	{
		for (; i >= 0; i--)
			p[i] = s[i];
	}
	return (p);
}

/**
 * new_dog - creates a dog struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner
 * Return: dog struct or Null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);
	p->name = _strcpy(name);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = _strcpy(owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}
