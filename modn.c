#include "monty.h"


/**
 * modn - Addsk.
 * @s: Pointetack.
 * @ln: Intergepcode.
 */

void modn(stack_t **s, unsigned int ln)
{
	int su;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
		me(8, ln, "mod");
	if ((*s)->n == 0)
		me(9, ln);
	(*s) = (*s)->next;
	su = (*s)->n % (*s)->prev->n;
	(*s)->n = su;
	free((*s)->prev);
	(*s)->prev = NULL;
}
