#include "lists.h"

/**
 * add_nodeint_end - Adding a node at the end of the linked list
 * @head: In the list, point to the first element.
 * @n: insert data to the new node
 *
 * Return: pointer to the new node, or NULL if otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
