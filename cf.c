#include "monty.h"
/**
 * cf - Calls
 * @func: Pointer
 * @opi: strin
 * @val: string
 * @ln: line num
 * @format: Forma
 */
void cf(op_func func, char *opi, char *val, int ln, int format)
{
	stack_t *node;
	int fl;
	int w;

	fl = 1;
	if (strcmp(opi, "push") == 0)
	{
		if (val != NULL && val[0] == '-')
		{
			val = val + 1;
			fl = -1;
		}
		if (val == NULL)
			er(5, ln);
		for (w = 0; val[w] != '\0'; w++)
		{
			if (isdigit(val[w]) == 0)
				er(5, ln);
		}
		node = cn(atoi(val) * fl);
		if (format == 0)
			func(&node, ln);
		if (format == 1)
			atq(&node, ln);
	}
	else
		func(&head, ln);
}
