#include "monty.h"

/**
 * er - Prints
 * @ec: The error codes are the following:
 * (1) => The user does not give any file or more than one file to the program.
 * (2) => The file provided is not a file that can be opened or read.
 * (3) => The file provided contains an invalid instruction.
 * (4) => When the program is unable to malloc more memory.
 * (5) => When the parameter passed to the instruction "push" is not an int.
 * (6) => When the stack it empty for pint.
 * (7) => When the stack it empty for pop.
 * (8) => When stack is too short for operation.
 */
void err(int ec, ...)
{
	va_list aj;
	char *opi;
	int lnum;

	va_start(aj, ec);
	switch (ec)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n",
				va_arg(aj, char *));
			break;
		case 3:
			lnum = va_arg(aj, int);
			opi = va_arg(aj, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", lnum, opi);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", va_arg(aj, int));
			break;
		default:
			break;
	}
	fn();
	exit(EXIT_FAILURE);
}
