#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: Filename to be read
 *@letters: Number of characters to be read
 *Return: Actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars_r, chars_w;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Fd Error:");
		return (0);
	}
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		dprintf(2, "Malloc Error:");
		return (0);
	}
	chars_r = read(fd, buf, letters);
	if (chars_r == -1)
	{
		dprintf(2, "Read Error:");
		free(buf);
		close(fd);
		return (0);
	}
	buf[chars_r] = '\0';
	chars_w = write(STDOUT_FILENO, buf, chars_r);
	if (chars_w != chars_r)
	{
		dprintf(2, "Write Error:");
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (chars_w);
}
