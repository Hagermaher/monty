#include "monty.h"

/**
 * ps - d.
 * @s: Pointeack.
 * @l: Intergepcode.
 */
void ps(stack_t **s, __attribute__((unused))unsigned int l)
{
	int as;
	stack_t *t;

	if (s == NULL || *s == NULL)
	{
		printf("\n");
		return;
	}
	t = *s;
	while (t != NULL)
	{
		as = t->n;
		if (as <= 0 || as > 127)
			break;
		printf("%c", as);
		t = t->next;
	}
	printf("\n");
}
