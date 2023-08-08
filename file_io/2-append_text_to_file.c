#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - print a list
 *
 * @filename: pointer to the list
 * @text_content: pointer to the list
 *
 * Return: rd.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, text_len, bytes;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	if (!text_content)
	{
		close(op);
			return (-1);
	}

		text_len = strlen(text_content);
		bytes = write(op, text_content, text_len);

		close(op);

		return (bytes == (int )text_len) ? 1 : -1;
}
