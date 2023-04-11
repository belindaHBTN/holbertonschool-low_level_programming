#include "main.h"

/**
 * ropen - open a file
 * @pathname: the specified file
 * @flags: access modes
 *
 * Description: open a file
 * Return: file descriptor on success, 98 on failure
 */
int ropen(const char *pathname, int flags)
{
	int fd;

	fd = open(pathname, flags);
	if (pathname == NULL || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", pathname);
		exit(98);
	}
	return (fd);
}

/**
 * wopen - open a file
 * @pathname: the specified file
 * @flags: access modes
 * @mode: permissions
 *
 * Description: open a file
 * Return: file descriptor on success, 99 on failure
 */
int wopen(const char *pathname, int flags, mode_t mode)
{
	int fd;

	fd = open(pathname, flags, mode);
	if (pathname == NULL || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", pathname);
		exit(99);
	}
	return (fd);
}

/**
 * xclose - close a file descriptor
 * @fd: file descriptor
 * @file_name: the name of the file that need to be closed
 *
 * Description: close a file descriptor
 * Return: 1 on success, 100 on failure
 */
int xclose(int fd, char *file_name)
{
	int res;

	res = close(fd);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_name);
		exit(100);
	}
	return (res);
}


/**
 * xread - read from a file descriptor
 * @fd: file descriptor
 * @buf: buffer
 * @count: the bytes that will be read
 * @name_of_file: name of the file
 *
 * Description: read from a file descriptor
 * Return: bytes that has been read on success, 98 on failure
 */
ssize_t xread(int fd, char *buf, size_t count, char *name_of_file)
{
	ssize_t bytes_read;

	bytes_read = read(fd, buf, count);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name_of_file);
		exit(98);
	}
	return (bytes_read);
}

/**
 * xwrite - write to a file descriptor
 * @fd: file descriptor
 * @buf: buffer
 * @count: the bytes that will be wrote
 * @name_of_file: name of the file
 *
 * Description: write to a file descriptor
 * Return: bytes that has been wrote on success, 99 on failure
 */
ssize_t xwrite(int fd, char *buf, size_t count, char *name_of_file)
{
	ssize_t bytes_write;

	bytes_write = write(fd, buf, count);
	if (bytes_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name_of_file);
		exit(99);
	}
	return (bytes_write);
}



/**
 * main - check the code
 * @argc: a count of the arguments passed to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	char buf[1024];
	int bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = ropen(argv[1], O_RDONLY);
	fd_to = wopen(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	bytes_read = xread(fd_from, buf, 1024, argv[1]);
	while (bytes_read != 0)
	{
		xwrite(fd_to, buf, bytes_read, argv[2]);
		bytes_read = xread(fd_from, buf, 1024, argv[1]);
	}

	xclose(fd_from, argv[1]);
	xclose(fd_to, argv[2]);
	return (0);
}
