#include "monty.h"

/**
 * rr - Rotat the top.
 * @s: P
 * @l: Interg
 */

void rr(stack_t **s, __attribute__((unused))unsigned int l)
{
	stack_t *t;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		return;
	t = *s;
	while (t->next != NULL)
		t = t->next;
	t->next = *s;
	t->prev->next = NULL;
	t->prev = NULL;
	(*s)->prev = t;
	(*s) = t;
}
