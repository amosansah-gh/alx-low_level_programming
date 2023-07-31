#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **z)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*z)
		return (0);

	while (*z)
	{
		diff = *z - (*z)->next;
		if (diff > 0)
		{
			temp = (*z)->next;
			free(*z);
			*z = temp;
			len++;
		}
		else
		{
			free(*z);
			*z = NULL;
			len++;
			break;
		}
	}

	*z = NULL;

	return (len);
}
