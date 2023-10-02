#include "main.h"

/**
 *_strlen - Gets length of a string
 *@s: String argument
 *Return: Length of string or zero
 */

size_t _strlen(char *s)
{
	size_t i = 0, len = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 *create_file - A function that creates a file
 *@filename: name of the file to create
 *@text_context: String to wirte to file
 *Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w = write(fd, text_content, _strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
