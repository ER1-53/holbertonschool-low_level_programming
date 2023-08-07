#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t total_read;
	char *buffer;
	if (filename == NULL)
		return 0;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return 0;

	buffer = (char *)malloc(letters);
	if (buffer == NULL) {
		close(file_descriptor);
		return 0;
	}

	total_read = read(file_descriptor, buffer, letters);
	if (total_read == -1) {
		perror("Erreur lors de la lecture du fichier");
		total_read = 0;
	} else {
		write(1, buffer, total_read);
	}

	close(file_descriptor);
	free(buffer);
	return total_read;
}
