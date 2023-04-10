#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the path of the file
 * @letters: the number of letters if should read and print
 *
 * Description: reads a text file and prints it to the standard output
 * Return: the actual number of letters it could read and print.
 * or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nobr;
	ssize_t nobw;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	buf = malloc((sizeof(*buf)) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	nobr = read(fd, buf, letters);
	nobw = write(STDOUT_FILENO, buf, nobr);

	close(fd);
	free(buf);
	return (nobw);
}
