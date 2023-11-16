#include "monty.h"

/**
 * pc - Prin.
 * @s: Pointee stack.
 * @ln: Intergede.
 */
void pc(stack_t **s, unsigned int ln)
{
	int as;

	if (s == NULL || *s == NULL)
		se(11, ln);
	as = (*s)->n;
	if (as < 0 || as > 127)
		se(10, ln);
	printf("%c\n", as);
}
