#include "monty.h"

/**
 * muln - Adds.
 * @s: Poi stack.
 * @line_number: Interge.
 */

void muln(stack_t **stack, unsigned int line_number)
{
	int su;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		me(8, line_number, "mul");
	(*s) = (*s)->next;
	su = (*s)->n * (*s)->prev->n;
	(*s)->n = su;
	free((*s)->prev);
	(*s)->prev = NULL;
}
