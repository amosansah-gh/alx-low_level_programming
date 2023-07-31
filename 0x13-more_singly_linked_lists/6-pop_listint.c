#include "lists.h"

/**
 * pop_listint - deleting linked list head node 
 * @head: pointer to the first element in the linked list
 *
 * Return: Deleted data in the elements
 * or 0 on empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
