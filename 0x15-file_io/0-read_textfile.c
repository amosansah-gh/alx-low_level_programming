#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-Text file read to print to STDOUT.
 * @filename: Read text file Using STDOUT
 * @letters: Read number of letters in the file
 * Return: w- actual printed number of bytes read
 *        0 (fails) or NULL (filename).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
