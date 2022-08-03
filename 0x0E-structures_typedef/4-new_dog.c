#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - Function for new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int newn, oldn, s;
	dog_t *dogg;

	newn = oldn = 0
	while (name[newn++])
		;

	while (owner[oldn++])
		;

	dogg = malloc(sizeof(dog_t));

	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(newn * sizeof(name));
	if (dogg == NULL)
		return (NULL);
	for (s = 0; s < newn; s++)
		dogg->name[s] = name[s];

	dogg->age = age;

	dogg->owner = malloc(oldn * sizeof(owner));
	if (dogg == NULL)
		return (NULL);
	for (s = 0; s < oldn; s++)
		dogg->owner[s] = owner[s];
	return (dogg);
}
