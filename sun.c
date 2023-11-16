#include "monty.h"


/**
 * sun - Ad
 * @s: Pointe` stack.
 * @ln: Intergode.
 */
void sun(stack_t **s, unsigned int ln)
{
	int su;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		me(8, ln, "sub");
	(*s) = (*s)->next;
	su = (*s)->n - (*s)->prev->n;
	(*s)->n = su;
	free((*s)->prev);
	(*s)->prev = NULL;
}
