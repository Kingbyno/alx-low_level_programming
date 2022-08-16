#include "lists.h"

/**
 * add_nodeint -> adds new node at the begining of a list
 * @head: pointer to the first
 * @n: added number of node
 * Return: A pointer of a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;

	return (*head);
}
