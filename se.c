#include "monty.h"
/**
 * se - handles er
 * @ec: The error codes are the following:
 * (10) ~> The number inside a node is outside ASCII bounds.
 * (11) ~> The stack is empty.
 */
void se(int ec, ...)
{
	va_list aj;
	int lnum;

	va_start(aj, ec);
	lnum = va_arg(aj, int);
	switch (ec)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", lnum);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", lnum);
			break;
		default:
			break;
	}
	fn();
	exit(EXIT_FAILURE);
}
