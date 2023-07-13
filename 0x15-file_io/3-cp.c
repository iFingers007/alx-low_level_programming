#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <errno.h>

/**
 *_close - Closes a file
 *@_file: file to be closed
 *
 *Return: 0 on success
*/

int _close(int _file)
{
	int c;

	c = close(_file);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file);
		return (100);
	}
	return (0);
}

/**
 *_cp - Copies a file
 *@src: File to copy from
 *@dst: File to copy to
 *
 *Return: 0 on success
*/
int _cp(char *src, char *dst)
{
	int ff, ft, br, bw;
	char buffer[1024];

	ff = open(src, O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		return (98);
	}
	ft = open(dst, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dst);
		return (99);
	}
	while ((br = read(ff, &buffer, 1024)) > 0)
	{
		bw = write(ft, &buffer, br);
		if (bw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dst);
			return (99);
		}
	}
	if (br == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		return (98);
	}
	_close(ff);
	_close(ft);
	return (0);
}
/**
 *main - Entry to program
 *@argc: Argument count
 *@argv: Aegument vector
 *
 *Return: 0 on success
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		return (97);
	}
	_cp(argv[1], argv[2]);

	return (0);
}
