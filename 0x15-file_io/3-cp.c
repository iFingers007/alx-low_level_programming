#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <errno.h>

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 *main - Entry to program
 *@argc: Argument count
 *@argv: Aegument vector
 *
 *Return: 0 on success
*/
int main(int argc, char **argv)
{
	int ff, ft, br, bw, cf;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		br = read(ff, buf, 1024);
		if (br == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (br > 0)
		{
			bw = write(ft, buf, br);
			if (bw == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	cf = close(ff);
	if (cf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);
	cf = close(ft);
	if (cf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft), exit(100);
	return (0);
}
