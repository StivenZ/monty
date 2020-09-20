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

	g_st.fp = fopen(filename, "r");
	if (g_st.fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	for (g_st.line_n = 1; fgets(str, 1000, g_st.fp) != NULL; g_st.line_n++)
	{
		j = 0;
		token = strtok(str, " \n\t\v"), g_st.clean[j] = token;
		if (token != NULL)
		{
			while ((token = strtok(NULL, " \n\t\v")))
			{
				if (check_digit(token) == 1)
					continue;
				else
				{
					j++;
					g_st.clean[j] = token;
					break;
				}
			}
			_selector(g_st.clean, g_st.line_n)(&head, atoi(g_st.clean[1]));
		}
		else
			continue;
	}
	if (head != NULL)
		free_list(head);
	head = NULL;
}
