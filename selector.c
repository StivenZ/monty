#include "monty.h"
/**
 * _selector - chooses the right function to perform
 * @strings: string to compare function with
 * @linea: line number from file
 * Return: pointer to function
*/
void (*_selector(char **strings, unsigned int linea))(stack_t **, unsigned int)
{
	instruction_t functions[] = {
		{"pall", pall},
		{"push", push},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 11)
	{
		if (functions[i].opcode && strcmp(functions[i].opcode, strings[0]) == 0)
		{
			return (functions[i].f);
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", linea, strings[0]);
	free_list(g_st.head);
	fclose(g_st.fp);
	exit(EXIT_FAILURE);
}
