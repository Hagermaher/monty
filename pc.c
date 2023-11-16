#include "monty.h"

/**
 * pc - Prin.
 * @s: Pointee stack.
 * @line_number: Intergede.
 */
void pc(stack_t **s, unsigned int line_number)
{
	int as;

	if (s == NULL || *s == NULL)
		se(11, line_number);
	as = (*s)->n;
	if (as < 0 || as > 127)
		se(10, line_number);
	printf("%c\n", as);
}
