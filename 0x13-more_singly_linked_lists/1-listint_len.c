#include "lists.h"

/**
 * listint_len - function tha returns node list
 * @h: a pointer to the node list
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
	unsigned in count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
