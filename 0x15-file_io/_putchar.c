#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: 1(success)
 * On error, -1(return) and errno as  appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
