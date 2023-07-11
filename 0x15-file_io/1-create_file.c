#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 *create_file - Creates a text file
 *@filename: Name of file to be read
 *@text_content: Null terminated string to be written to the file
 *
 *Return: 1 on success, or -1 if error occurs
*/

int create_file(const char *filename, char *text_content)
{
	int fl, bw, len;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fl == -1)
		return (0);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		bw = write(fl, text_content, len);
		if (bw == -1)
		{
			close(fl);
			return (-1);
		}
	}
	close(fl);
	return (1);
}
