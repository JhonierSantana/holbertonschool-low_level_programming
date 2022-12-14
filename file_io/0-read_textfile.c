#include "main.h"

/**
 * read_textfile - reads a text file and print
 * @filename: Name of the file with extension
 * @letters: Number of letters to read
 * Return: Actual number of letters read, 0 if something fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = (char *)malloc(((sizeof(char)) * letters) + 1);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	r = read(fd, buff, letters);

	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[r] = '\0';
	w = write(STDOUT_FILENO, buff, r);
	if (w < 0 || w != r)
	{
		free(buff);
		close(fd);
		return (0);
	}

	close(fd);
	free(buff);
	return (r);
}
