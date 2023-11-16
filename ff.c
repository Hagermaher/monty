#include "monty.h"
/**
 * ff - find
 * @opc: opcode
 * @val: argumen
 * @format: storage format.
 * @ln: line number
 * Return: void
 */
void find_func(char *opc, char *val, int ln, int format)
{
	int w;
	int fl;

	instruction_t func_list[] = {
		{"push", ats},
		{"pall", prs},
		{"pint", prt},
		{"pop", pt},
		{"nop", np},
		{"swap", sn},
		{"add", an},
		{"sub", sun},
		{"div", dn},
		{"mul", muln},
		{"mod", modn},
		{"pchar", pc},
		{"pstr", ps},
		{"rotl", rl},
		{"rotr", rr},
		{NULL, NULL}
	};

	if (opc[0] == '#')
		return;

	for (fl = 1, w = 0; func_list[w].op != NULL; w++)
	{
		if (strcmp(opc, func_list[w].op) == 0)
		{
			cf(func_list[w].f, opc, val, ln, format);
			fl = 0;
		}
	}
	if (fl == 1)
		er(3, ln, opc);
}
