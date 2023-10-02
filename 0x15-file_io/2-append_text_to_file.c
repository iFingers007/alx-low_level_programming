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
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file to create
 *@text_content: String to wirte to file
 *Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_EXCL | O_APPEND);
	w = write(fd, text_content, _strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
