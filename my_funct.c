#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
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
printf("El elemento que guardamos es %d\n", (*stack)->n);
}

/**
 * pall - prints all the values on the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void pall(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    printf("You are printing the stack\n");

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
    printf("You are printing the top element\n");
    
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
    printf("You just reomved the top element\n");
    
}