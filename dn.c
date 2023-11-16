#include "monty.h"

/**
 * dn - Addtack.
 * @s: Pointestack.
 * @ln: Intergee.
 */
void dn(stack_t **s, unsigned int ln)
{
	int su;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		me(8, ln, "div");
	if ((*s)->n == 0)
		me(9, ln);
	(*s) = (*s)->next;
	su = (*s)->n / (*s)->prev->n;
	(*s)->n = su;
	free((*s)->prev);
	(*s)->prev = NULL;
}
