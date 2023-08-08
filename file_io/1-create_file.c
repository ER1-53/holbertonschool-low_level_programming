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
int create_file(const char *filename, char *text_content)
{
	int op, text_len, bytes, mode;


	if (!filename)
		return (-1);
	mode = S_IRUSR | S_IWUSR;
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, mode);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		bytes = write(op, text_content, text_len);
		if (bytes == -1)
		{
			close(op);
			return (-1);
		}
		if (bytes < text_len)
		{
			close(op);
			return (-1);
		}
	}


	close(op);
	return (1);
}
