#include "monty.h"
/**
 * free_list - frees a list
 * @head: pointer the list
*/
void free_list(stack_t *head)
{
	stack_t *tmp = head;

	if (!head)
	{
		return;
	}

	while (tmp->next)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}
	free(tmp);
}
