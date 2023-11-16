#include "monty.h"

/**
 * rl - Rotatetom.
 * @s: Pointestack.
 * @ln: Intergopcode.
 */
void rl(stack_t **s, __attribute__((unused))unsigned int ln)
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
