#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a file and prints it to POSIX
 * @filename: a pointer to the filename
 * @letters: the numbers of letters the function should read and write
 * Return: if filename is NULL or function fails - 0
 *          O/w - the actual number of bytes the function can read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
