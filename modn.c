#include "monty.h"


/**
 * modn - Addsk.
 * @s: Pointetack.
 * @line_number: Intergepcode.
 */

void modn(stack_t **s, unsigned int line_number)
{
	int su;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		me(8, line_number, "mod");
	if ((*s)->n == 0)
		me(9, line_number);
	(*s) = (*s)->next;
	su = (*s)->n % (*s)->prev->n;
	(*s)->n = su;
	free((*s)->prev);
	(*s)->prev = NULL;
}
