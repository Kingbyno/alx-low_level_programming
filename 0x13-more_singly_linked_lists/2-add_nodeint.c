#include "lists.h"

/**
 * add_nodeint -> adds new node at the begining of a list
 * @head: pointer to the first
 * @n: added number of node
 * Return: A pointer of a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	if (*head == NULL)
		new_n->next = NULL;
	else
		new_n-> = *head;
	new_n-> = n;
	*head = new_n;

	return (*head);
}
