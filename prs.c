#include "monty.h"

/**
 * prs - A.
 * @s: Pointetack.
 * @ln: linopcode.
 */
void prs(stack_t **s, unsigned int ln)
{
	stack_t *t;

	(void) ln;
	if (s == NULL)
		exit(EXIT_FAILURE);
	t = *s;
	while (t != NULL)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
