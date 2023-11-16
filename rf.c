#include "monty.h"
/**
 * rf - read file
 * @fd: pointer
 * Return: void
 */
void rf(FILE *fd)
{
	int line_number, format = 0;
	char *buf = NULL;
	size_t len = 0;

	for (line_number = 1; getline(&buf, &len, fd) != -1; line_number++)
	{
		format = pal(buf, line_number, format);
	}
	free(buf);
}
