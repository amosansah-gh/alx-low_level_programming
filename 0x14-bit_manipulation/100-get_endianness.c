#include "main.h"

/**
 * get_endianness - checking if a machine's size whether little or big endian
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
