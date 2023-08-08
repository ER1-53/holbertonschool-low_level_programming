#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


/**
 * main - check the code
 *
 * @argc: pointer to the list
 * @argv: pointer to the list
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int op_file1, op_file2, w, rd;
	char buffer[1024];

	if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
			exit(97);
		}

	op_file1 = open(argv[1], O_RDONLY);
	rd = read(op_file1, buffer, 1024);
	op_file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 664);

	if (op_file1 == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		close(op_file1);
		exit(98);
	}
	close(op_file1);

	w = write(op_file2, buffer, rd);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(op_file2);
		exit(100);
	}

	close(op_file2);

	return (0);
}
