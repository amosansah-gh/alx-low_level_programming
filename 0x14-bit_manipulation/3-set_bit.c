#include "main.h"

/**
 * set_bit - At any given index, set the bit to 1
 * @n: pointer to the number to change
 * @index: The bit index should be to set to 1
 *
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
