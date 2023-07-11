#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 *main - Entry to program
 *@:
 *
 *Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int ff, ft, cff, cft;
	char *buffer;
	int bw, br;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		exit(97);
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0004 | 0400 | 0200 | 0040 | 0020);
	ff = open(argv[1], O_RDWR);
	br = read(ff, &buffer, 1024);
	if (ff == -1 || br == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	bw = write(ft, &buffer, br);
	if (ft == -1 || bw == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cff = close(ff);
	if (cff == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	cft = close(ft);
	if (cft == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
	return (0);
}
