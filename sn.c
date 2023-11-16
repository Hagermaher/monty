#include "monty.h"

/**
 * sn - Swap
 * @s: Pointer.
 * @ln: Interg opcode.
 */
void sn(stack_t **s, unsigned int ln)
{
	stack_t *t;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		me(8, ln, "swap");
	t = (*s)->next;
	(*s)->next = t->next;
	if (t->next != NULL)
		t->next->prev = *s;
	t->next = *s;
	(*s)->prev = t;
	t->prev = NULL;
	*s = t;
}
