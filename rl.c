#include "monty.h"

/**
 * rl - Rotatetom.
 * @s: Pointestack.
 * @l: Intergopcode.
 */
void rl(stack_t **s, __attribute__((unused))unsigned int l)
{
	stack_t *t;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		return;
	t = *s;
	while (t->next != NULL)
		t = t->next;
	t->next = *s;
	(*s)->prev = t;
	*s = (*s)->next;
	(*s)->prev->next = NULL;
	(*s)->prev = NULL;
}
