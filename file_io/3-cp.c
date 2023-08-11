#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int op_file1, op_file2, w, rd;
	char buffer[1024];
	size_t left_to_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	op_file1 = open(argv[1], O_RDONLY);
	if (op_file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	op_file2 = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (op_file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(op_file1);
		exit(99);
	}

	left_to_write = 0;
	while ((rd = read(op_file1, buffer, sizeof(buffer))) > 0) {
		left_to_write = rd;
		while (left_to_write > 0) {
			w = write(op_file2, buffer, rd);
			if (w == -1) {
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(op_file2);
				close(op_file1);
				exit(99);
			} else {
				left_to_write -= w;
			}
		}
	}

	if (rd == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(op_file2);
		close(op_file1);
		exit(98);
	}
	if (close(op_file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd op_file1\n");
		return (100);
	}
	if (close(op_file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd op_file2\n");
		return (100);
	}
	return 0;
}

