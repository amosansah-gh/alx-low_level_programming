#include "lists.h"

/**
 * get_nodeint_at_index - returning the node at the index in the linked list
 * @head: linked list’s first node
 * @index: index of the node to return
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *temp = head;

	while (temp && z < index)
	{
		temp = temp->next;
		z++;
	}

	return (temp ? temp : NULL);
}
