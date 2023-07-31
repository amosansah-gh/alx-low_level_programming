#include "lists.h"

/**
 * sum_listint - calculating the sum all data in a listint_t list
 * @head: linked list’s first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
