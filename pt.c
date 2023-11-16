#include "monty.h"

/**
 * pt - Addk.
 * @s: Pointk.
 * @ln: Interger repreode.
 */

void pt(stack_t **s, unsigned int ln)
{
	stack_t *t;

	if (s == NULL || *s == NULL)
		me(7, ln);
	t = *s;
	*s = t->next;
	if (*s != NULL)
		(*s)->prev = NULL;
	free(t);
}
