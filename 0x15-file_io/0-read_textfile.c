#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: Filename to be read
 *@letters: Number of characters to be read
 *Return: Actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);
	return (w);
}
