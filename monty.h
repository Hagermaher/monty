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
 * struct stack_s - doubly linked
 * @w: inte
 * @prev: points
 * @next: points
 * Description: doubly linked list
 */
typedef struct stack_s
{
        int w;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode
 * @op: op
 * @fun: function
 *
 * Description: opcode
 */
typedef struct instruction_s
{
        char *op;
        void (*fun)(stack_t **st, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);


void open_file(char *fna);
int pal(char *buf, int line_number, int f);
void rf(FILE *);
int lc(FILE *);
void ff(char *, char *, int, int);


stack_t *create_node(int m);
void fn(void);
void prs(stack_t **, unsigned int);
void ats(stack_t **, unsigned int);
void atq(stack_t **, unsigned int);

void cf(op_func, char *, char *, int, int);

void prt(stack_t **, unsigned int);
void pt(stack_t **, unsigned int);
void np(stack_t **, unsigned int);
void sn(stack_t **, unsigned int);


void an(stack_t **, unsigned int);
void sn(stack_t **, unsigned int);
void dn(stack_t **, unsigned int);
void muln(stack_t **, unsigned int);
void modn(stack_t **, unsigned int);


void pc(stack_t **, unsigned int);
void ps(stack_t **, unsigned int);
void rl(stack_t **, unsigned int);


void er(int ec, ...);
void me(int ec, ...);
void se(int ec, ...);
void rr(stack_t **, unsigned int);

#endif
