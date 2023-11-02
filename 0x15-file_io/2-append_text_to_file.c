#include "main.h"
/**
 * append_text_to_file - append text to a file
 * @filename: filename
 * @text_content: content of file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nlet;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;
		rwr = write(fd, text_content, nlet);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
