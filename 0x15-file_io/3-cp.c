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
	char buffer[1024];
	ssize_t bw, br;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	ft = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0004 | 0400 | 0200 | 0040 | S_IWGRP);
	if (ft == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((br = read(ff, &buffer, 1024)) > 0)
	{
		bw = write(ft, &buffer, br);
			if (bw == -1)
			{
				dprintf(2, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
	}
	if (br == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
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
