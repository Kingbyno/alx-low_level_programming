#include "lists.h"

/**
 * listint_len - function that returns the number
 * @h: Pointer to a number
 * Return: number of element linked
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
