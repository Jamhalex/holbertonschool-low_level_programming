#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static void e_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

static void e_read(const char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
	exit(98);
}

static void e_write(const char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
	exit(99);
}

static void e_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

static void xclose(int fd)
{
	if (close(fd) == -1)
		e_close(fd);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r;
	char buf[1024];

	if (argc != 3)
		e_usage();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		e_read(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		xclose(fd_from);
		e_write(argv[2]);
	}

	while ((r = read(fd_from, buf, sizeof(buf))) > 0)
	{
		ssize_t off = 0;

		while (off < r)
		{
			ssize_t w = write(fd_to, buf + off, r - off);

			if (w == -1)
			{
				xclose(fd_from);
				xclose(fd_to);
				e_write(argv[2]);
			}
			off += w;
		}
	}

	if (r == -1)
	{
		xclose(fd_from);
		xclose(fd_to);
		e_read(argv[1]);
	}

	xclose(fd_from);
	xclose(fd_to);
	return (0);
}

