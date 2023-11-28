#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file in question
 * @text_content: content of the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters];letters++)
		;
	rwr = write(fd, text_content, letters);

	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
