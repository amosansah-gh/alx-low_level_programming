#include "lists.h"

/**
 * add_nodeint - Adding new node at the beginning of the linked list
 * @head: First node pionters in the list
 * @n: insert data to the new node
 *
 * Return: Pointer to the new node, or NULL if otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
