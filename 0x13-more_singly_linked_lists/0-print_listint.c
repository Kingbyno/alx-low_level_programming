#include "lists.h"

/**
 * print_listint - function that prints all element list
 * @h: pointer to the nodes list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
