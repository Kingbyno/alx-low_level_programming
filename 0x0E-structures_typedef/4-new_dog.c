#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nln, oln, i;
	dog_t *doggy;

	nln = oln = 0;
	while (name[nln++])
		;
	while (owner[oln++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nln * sizeof(name));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < nln; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(oln * sizeof(doggy->owner));
	if (doggy == NULL)
	{
		free(doggy->name);
		free( doggy);
		return (NULL);
	}
	for (i = 0; i < oln; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
