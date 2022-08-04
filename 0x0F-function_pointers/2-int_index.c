#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: a parameter
 * @size: size of the array
 * @cmp: a function that a call
 *
 * Return: index of first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (p = 0; p < size; p++)
	{
		if ((cmp)(array[p]) == 1)
		{
			return (p);
		}
	}
	return (-1);
}
