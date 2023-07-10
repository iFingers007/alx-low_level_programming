#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 *read_textfile - Reads a text file
 *@filename: Name of file to be read
 *@letters: Number of letters to be outputted
 *
 *Return: Actual Nuber of letters it read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl, br;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		free(buf);
		return (0);
	}
	br = read(fl, buf, letters);
	buf[br] = '\0';
	if (br == -1)
	{
		free(buf);
		return (0);
	}
	if (write(STDOUT_FILENO, buf, br) != br)
	{
		free(buf);
		close(fl);
		return (0);
	}

	free(buf);
	close(fl);
	return (br);
}
