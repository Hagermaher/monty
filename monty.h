#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
extern stack_t *head;
typedef void (*opf)(stack_t **, unsigned int);
void of(char *file_name);
int pl(char *buffer, int line_number, int format);
void rf(FILE *);
int lc(FILE *);
void ff(char *, char *, int, int);
stack_t *cn(int n);
void fn(void);
void prs(stack_t **, unsigned int);
void ats(stack_t **, unsigned int);
void atq(stack_t **, unsigned int);
void cf(op_func, char *, char *, int, int);
void prt(stack_t **, unsigned int);
void pt(stack_t **, unsigned int);
void no(stack_t **, unsigned int);
void swn(stack_t **, unsigned int);
void an(stack_t **, unsigned int);
void sn(stack_t **, unsigned int);
void dn(stack_t **, unsigned int);
void mun(stack_t **, unsigned int);
void mon(stack_t **, unsigned int);
void pc(stack_t **, unsigned int);
void ps(stack_t **, unsigned int);
void rot(stack_t **, unsigned int);
void er(int error_code, ...);
void me(int error_code, ...);
void se(int error_code, ...);
void ro(stack_t **, unsigned int);

#endif
