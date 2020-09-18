#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: pointher to the linked list
 * @n: line number of the file
*/
void push(stack_t **stack, unsigned int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fclose(fp);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = (*stack);
	new_node->prev = NULL;
	if (*stack)
	{
		(*stack)->prev = new_node;
	}
	(*stack) = new_node;
}

/**
 * pall - prints all the values on the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	stack_t *tmp;

	if (*stack == NULL)
	{
		return;
	}
	tmp = (*stack);

	while (tmp != NULL)
	{
		fprintf(stdout, "%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * pint - pritns the top value of the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * pop - removes top element of the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
