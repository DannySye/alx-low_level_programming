#include "dog.h"

/**
 * init_dog - Describes the dog characteristics
 * @d: pointer to dog structure
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
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
