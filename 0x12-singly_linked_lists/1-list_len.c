#include "lists.h"

/**
 * list_len -> a function that returns elements
 * @h: pointer to number of elements
 * Return: the number of element linked
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
