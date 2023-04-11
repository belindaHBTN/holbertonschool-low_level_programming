#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: the name of the file need to be created
 * @text_content: the content that will be wrote to the file
 *
 * Description: a function that append text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int nobw;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len = len + 1;
		}
		nobw = write(fd, text_content, len);
	}
	if (nobw == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
