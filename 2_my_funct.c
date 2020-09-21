#include "monty.h"
/**
 * div - divides the top two elements of the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void div(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", g_st.line_n);
		c_end();
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", g_st.line_n);
		c_end();
	}

	(*stack)->next->n = (*stack)->next->n / (*stack)->n;
	(*stack) = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
