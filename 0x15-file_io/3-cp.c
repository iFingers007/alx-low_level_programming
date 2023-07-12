#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdarg.h>
/**
 *perror_exit - For printing the error messages and exit
 *@msg: Error message to be printed
 *@exn: Exit Number
 *
 *Return: Void
*/

void perror_exit(char *msg, int exn, ...)
{
	unsigned int i = 0;
	va_list list;
	char *value;

	va_start(list, exn);
	while (msg[i] != '\0')
	{
		if (msg[i] == '%')
		{
			value = va_arg(list, char *);
			dprintf(STDERR_FILENO, "%s ", value);
			i++;
		}
		dprintf(STDERR_FILENO, "%s\n", msg);
		exit(exn);
	}
	va_end(list);
}

/**
 *_cp - Copies a file
 *@src: File to copy from
 *@dst: File to copy to
 *
 *Return: Void
*/

void _cp(char *src, char *dst)
{
	int ff, ft, cff, cft;
	char buffer[1024];
	ssize_t br, bw;

	ff = open(src, O_RDONLY);
	if (ff == -1)
		perror_exit("Error: Can't read from file %s\n", 98, dst);
	ft = open(dst, O_WRONLY | O_CREAT | O_TRUNC,
	  S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (ft == -1)
		perror_exit("Error: Can't write to %s\n", 99, dst);
	while ((br = read(ff, &buffer, 1024)) > 0)
	{
		bw = write(ft, &buffer, br);
		if (bw == -1)
			perror_exit("Error: Can't write to %s\n", 99, dst);

	}
	if (br == -1)
		perror_exit("Error: Can't read from file %s\n", 98, dst);
	cff = close(ff);
	if (cff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	cft = close(ft);
	if (cft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
}

/**
 *main - Entry to program
 *@argc: Command line argument count
 *@argv: Argument Vector
 *
 *Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
		perror_exit("Usage: %s file_from file_to\n", 97, argv[0]);
	_cp(argv[1], argv[2]);

	return (0);
}
