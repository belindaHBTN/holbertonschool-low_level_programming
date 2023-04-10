#include "main.h"

/**
 *
 *
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
	
	return (nobw);
}
