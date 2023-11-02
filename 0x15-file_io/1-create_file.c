#include "main.h"
/**
 * create_file - create a file
 * @filename: filename
 * @text_content: text copited into file
 * Return: (1) or (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nlet;
	int rwr;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (nlet = 0; text_content[nlet]; nlet++)
		;
	rwr = write(fd, text_content, nlet);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
