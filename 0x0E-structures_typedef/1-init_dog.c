#include "dog.h"

/**
 * init_dog - initialise menbers of dog
 * @d: pointer to struct dog to modify its menber
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
