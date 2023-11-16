#include "monty.h"
/**
 * me - handles er
 * @ec: The error codes are the following:
 * (6) => When the stack it empty for pint.
 * (7) => When the stack it empty for pop.
 * (8) => When stack is too short for operation.
 * (9) => Division by zero.
 */
void me(int ec, ...)
{
	va_list aj;
	char *opi;
	int lnum;

	va_start(aj, ec);
	switch (ec)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(aj, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(aj, int));
			break;
		case 8:
			lnum = va_arg(aj, unsigned int);
			opi = va_arg(aj, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", lnum, opi);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(aj, unsigned int));
			break;
		default:
			break;
	}
	fn();
	exit(EXIT_FAILURE);
}
