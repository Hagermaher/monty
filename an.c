#include "monty.h"

/**
 * an - Adf the stack.
 * @s: Poin stack.
 * @ln: Interger reopcode.
 */
void an(stack_t **s, unsigned int ln)
{
	int su;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		me(8, ln, "add");
	(*s) = (*s)->next;
	su = (*s)->n + (*s)->prev->n;
	(*s)->n = su;
	free((*s)->prev);
	(*s)->prev = NULL;
}
