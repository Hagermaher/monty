#include "monty.h"
/**
 * pal - Separate
 * @buf: line
 * @line_number: line num
 * @format:  storage format
 * Return: 0 or 1
 */

int pal(char *buf, int line_number, int format)
{
	char *opc, *val;
	const char *del = "\n ";

	if (buf == NULL)
		er(4);

	opc = strtok(buf, del);
	if (opc == NULL)
		return (format);
	val = strtok(NULL, del);

	if (strcmp(opc, "stack") == 0)
		return (0);
	if (strcmp(opc, "queue") == 0)
		return (1);

	ff(opc, val, line_number, format);
	return (format);
}
