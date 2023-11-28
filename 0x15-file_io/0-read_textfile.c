#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: file to be read
 * @letters: number of letters to be printed
 * Return: letters to be printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t rd, wr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(fd);
	free(buff);
	return (wr);
}
