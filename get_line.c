#include "monty.h"
/**
 * get_line - gets a line from the input file
 * @filename: name of the input filename
 * Return: a string with the line read
*/
void get_line(char *filename)
{
	char str[1000], *token;

	g_st.head = NULL;
	g_st.fp = fopen(filename, "r");
	if (g_st.fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	for (g_st.line_n = 1; fgets(str, 1000, g_st.fp) != NULL; g_st.line_n++)
	{
		token = strtok(str, " \n\t\v"), g_st.clean[0] = token;
		if (token != NULL)
		{
			while ((token = strtok(NULL, " \n\t\v")))
			{
				if (_isdigit(token) == 0)
					continue;
				else
				{
					g_st.clean[1] = token;
					break;
				}
			}
			if (!token)
				g_st.clean[1] = "";
			_selector(g_st.clean, g_st.line_n)(&g_st.head, atoi(g_st.clean[1]));
		}
		else
			continue;
	}
	if (g_st.head != NULL)
		free_list(g_st.head);
	g_st.head = NULL;
}
