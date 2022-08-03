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
	dog_t *dog;

	newn = oldn = 0;
	while (name[newn++])
		;
	while (owner[oldn++])
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(newn * sizeof(dog->name));
	if (dog == NULL)
		return (NULL);
	for (s = 0; s < newn; s++)
		dog->name[s] = name[s];

	dog->age = age;

	dog->owner = malloc(oldn * sizeof(dog->owner));
	if (dog == NULL)
		return (NULL);
	for (s = 0; s < oldn; s++)
		dog->owner[s] = owner[s];
	return (dog);
}
