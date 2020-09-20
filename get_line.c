#include "monty.h"
/**
 * get_line - gets a line from the input file
 * @filename: name of the input filename
 * Return: a string with the line read
*/
void get_line(char *filename)
{
	unsigned int j;

	char str[1000], *token;
	stack_t *head = NULL;

	g_var.fp = fopen(filename, "r");
	if (g_var.fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	for (g_var.line_n = 1; fgets(str, 1000, g_var.fp) != NULL; g_var.line_n++)
	{
		j = 0;
		token = strtok(str, " \n\t\v"), g_var.clean[j] = token;
		if (token != NULL)
		{
			while ((token = strtok(NULL, " \n\t\v")))
			{
				if (check_digit(token) == 1)
					continue;
				else
				{
					j++;
					g_var.clean[j] = token;
					break;
				}
			}
			_selector(g_var.clean, g_var.line_n)(&head, atoi(g_var.clean[1]));
		}
		else
			continue;
	}
	if (head != NULL)
		free_list(head);
	head = NULL;
}
