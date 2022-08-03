#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -> a function that executes a function given as a parameter
 * @array: array of a parameter
 * @size: size of the array
 * @action: function as a parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (p = 0; p < size; p++)
	{
		(*action)(array[p]);
	}
}

