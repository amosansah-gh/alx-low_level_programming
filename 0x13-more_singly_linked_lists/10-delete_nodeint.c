#include "lists.h"

/**
 * delete_nodeint_at_index - A function to delete a node in a linked list at a certain index
 * @head: pointer to the first element in the linked list
 * @index: delete the index of the node
 *
 * Return: success (1), or fail (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int u = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (u < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		u++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
