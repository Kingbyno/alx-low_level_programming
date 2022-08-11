#include <lists.h>

/**
 * print_list -> a function that prints all the elements of a list_t list.
 * @h: a pointer of a node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		printf("[0] (nil)\n");
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u]) %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
