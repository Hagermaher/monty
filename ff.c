#include "monty.h"
/**
 * ff - find
 * @opc: opcode
 * @val: argumen
 * @format: storage format.
 * @ln: line number
 * Return: void
 */
void ff(char *opc, char *val, int ln, int format)
{
	int w;
	int fl;

	instruction_t func_list[] = {
		{"push", ats},
		{"pall", ps},
		{"pint", pt},
		{"pop", pop_top},
		{"nop", nop},
		{"swap", sn},
		{"add", an},
		{"sub", sun},
		{"div", dn},
		{"mul", muln},
		{"mod", mn},
		{"pchar", pc},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	if (opc[0] == '#')
		return;

	for (fl = 1, w = 0; func_list[i].opc != NULL; w++)
	{
		if (strcmp(opcode, func_list[i].opcode) == 0)
		{
			call_fun(func_list[i].f, opcode, value, ln, format);
			flag = 0;
		}
	}
	if (flag == 1)
		err(3, ln, opcode);
}
