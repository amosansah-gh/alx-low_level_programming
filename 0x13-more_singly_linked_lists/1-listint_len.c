#include "lists.h"

/**
 * listint_len - Returns linked lists elements
 * @h: linked list of type listint_t to traverse
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *y)
{
	size_t num = 0;

	while (y)
	{
		num++;
		y = y->next;
	}

	return (num);
}
