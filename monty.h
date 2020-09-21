#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct global_struct - global variables
 * @fp: file descriptor
 * @line_n: number of the current line in the file
 * @clean: array from line in file
 * @head: pointer to the stack's head
 *
 * Description: global variables to return lines and close fd
 */
typedef struct global_struct
{
	char *clean[1000];
	FILE *fp;
	unsigned int line_n;
	stack_t *head;
} global_t;

global_t g_st;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void c_end(void);
unsigned int _strlen(char *str);
int _isdigit(char *c);
void get_line(char *filename);
void free_list(stack_t *head);
void (*_selector(char **, unsigned int))(stack_t **, unsigned int);

void push(stack_t **, unsigned int);
void pall(stack_t **, unsigned int);
void pint(stack_t **, unsigned int);
void pop(stack_t **, unsigned int);
void swap(stack_t **, unsigned int);
void add(stack_t **, unsigned int);
void nop(stack_t **, unsigned int);
void sub(stack_t **, unsigned int);
#endif /* _MONTY_H_ */
