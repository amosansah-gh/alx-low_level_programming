#include "main.h"
#include <unistd.h>
/**
 * _putchar - char c to stdout
 * @c: The character to print
 *
 * Return: 1 (success)
 * Error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
