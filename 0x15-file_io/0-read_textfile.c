#include "main.h"
/**
 * read_textfile - Reads a file and prints it to the POSIX stdout.
 * @filename: The name of the file that needs to be read.
 * @letters: Is the number of letters the function should print.
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, i, rl;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	rl = read(fd, buf, letters);
	if (rl == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	for (i = 0; i < rl; i++)
	{
		if (write(STDOUT_FILENO, &buf[i], 1) == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}

	}
	close(fd);
	free(buf);
	return (rl);
}
