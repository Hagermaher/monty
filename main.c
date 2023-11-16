#include "monty.h"

/**
 * main - entry point
 * @argc: argument
 * @argv: lis
 * Return: always 0
 */

int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	opf(argv[1]);
	fn();
	return (0);
}

/**
 * cn - Create.
 * @n: Numbe
 * Return: pointer
 */
stack_t *cn(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		er(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}

/**
 * fn - Frees node
 */
void fn(void)
{
	stack_t *head = NULL;
	stack_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}


/**
 * atq - Adds
 * @newnode: Pointe
 * @ln: line num
 */
void atq(stack_t **newnode, __attribute__((unused))unsigned int ln)
{
	stack_t *head = NULL;
	stack_t *tmp;

	if (newnode == NULL || *newnode == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *newnode;
		return;
	}
	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *newnode;
	(*newnode)->prev = tmp;

}
