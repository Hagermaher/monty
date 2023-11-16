#include "monty.h"

/**
 * ats - Add.
 * @nn: Pointeode.
 * @l: Intergeropcode.
 */

void ats(stack_t **nn, __attribute__((unused))unsigned int l)
{
	stack_t *t;

	if (nn == NULL || *nn == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *nn;
		return;
	}
	t = head;
	head = *nn;
	head->next = t;
	t->prev = head;
}
