#include "main.h"

#define R_ERR "Error: Can't read from file %s\n"
#define W_ERR "Error: Can't write to %s\n"

/**
 * main - Intro to progran
 * @ac: num of args
 * @av: args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int from, to, on_close, w, r;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, av[2]), exit(99);
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, READ_ERR, av[1]), exit(98);
	while (1)
	{
		r = read(from, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, READ_ERR, av[1]), exit(98);
		if (r > 0)
		{
			w = write(to, buffer, r);
			if (w == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, av[2]), exit(99);
		} else
			break;
	}
	on_close = close(from);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	on_close = close(to);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
