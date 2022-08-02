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
	int newn, oldn, o;
	dog_t *dogg;

	newn = oldn = 0;
	while (name[newn++])
		;
	while (owner[oldn++])
		;
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(newn * sizeof(dogg->name));
	if (dogg == NULL)
		return (NULL);
	for (o = 0; o < newn; o++)
		dogg->name[o] = name[o];
	dogg->age = age;

	dogg->owner = malloc(oldn * sizeof(dogg->owner));
	if (dogg == NULL)
		return (NULL);
	for (o = 0; o < oldn; o++)
	dogg->owner[o] = owner[o];
		return (dogg);
}
