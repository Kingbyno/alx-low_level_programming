#include "dog.h"

/**
 * init_dog - initializied function of a type of dog
 * @d: pointer function
 * @name: pointer of the dog type name
 * @age: The dog type age
 * @owner: pointer to the owner of the dog
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
