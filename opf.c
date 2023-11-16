#include "monty.h"

/**
 * opf - opens a file
 * @fna: file
 * Return: void
 */

void opf(char *fna)
{
	FILE *fd = fopen(fna, "r");

	if (fna == NULL || fd == NULL)
		er(2, file_name);

	rf(fd);
	fclose(fd);
}
