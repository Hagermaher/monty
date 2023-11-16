#include "monty.h"

/**
 * muln - Adds.
 * @s: Poi stack.
 * @ln: Interge.
 */

void muln(stack_t **s, unsigned int ln)
{
	int su;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		me(8, ln, "mul");
	(*s) = (*s)->next;
	su = (*s)->n * (*s)->prev->n;
	(*s)->n = su;
	free((*s)->prev);
	(*s)->prev = NULL;
}
