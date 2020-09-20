#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void swap(stack_t **stack, unsigned int line_number)
{
	unsigned int tmp;

	(void)line_number;

	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", g_st.line_n);
		c_end();
	}
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;

}

/**
 * add - adds the top two elements of the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void add(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", g_st.line_n);
		c_end();
	}

	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	(*stack) = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
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
	free_list(g_st.head);
	fclose(g_st.fp);
	exit(EXIT_FAILURE);
}

/**
 * sub - substracts the top element from the second top one
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void sub(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", g_st.line_n);
		c_end();
	}

	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	(*stack) = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
