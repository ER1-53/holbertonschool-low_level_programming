#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - print a list
 *
 * @filename: pointer to the list
 * @text_content: pointer to the list
 *
 * Return: op.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, text_len, bytes;

	if (!filename)
		return (-1);
		
	if (!text_content)
		return (1);

	text_len = strlen(text_content);


	op = open(filename, O_WRONLY | O_APPEND);
	bytes = write(op, text_content, text_len);

	if (op == -1 || bytes == -1)
		return (-1);

	close(op);
	return (1);
}
