#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: pointher to the linked list
 * @line_number: line number of the file
*/
void push(stack_t **stack, unsigned int line_number)
{
    (void)stack;

    printf("La línea en la que se ejecutó esta mierda es la %u\n", line_number);
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