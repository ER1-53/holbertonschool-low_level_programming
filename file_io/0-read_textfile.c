#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - print a list
 *
 * @filename: pointer to the list
 * @letters: pointer to the list
 *
 * Return: rd.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd;
	char *buf;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	buf = (char *)malloc(letters);
	if (!buf)
	{
		close(op);
		return (0);
	}

	rd = read(op, buf, letters);
	if (rd == -1)
		return (0);

	write(STDOUT_FILENO, buf, rd);


	close(op);
	free(buf);

	return (rd);
}
