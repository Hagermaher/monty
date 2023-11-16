#include "monty.h"

/**
 * prt - Printack.
 * @s: Pointetack.
 * @ln: Intergcode.
 */
void prt(stack_t **s, unsigned int ln)
{
	if (s == NULL || *s == NULL)
		me(6, ln);
	printf("%d\n", (*s)->n);
}
