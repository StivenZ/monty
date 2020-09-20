#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * add - adds the top two elements of the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void add(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * nop - does nothing
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * c_end - default: closes fd and exits err message
*/
void c_end(void)
{
	fclose(g_var.fp);
	exit(EXIT_FAILURE);
}
