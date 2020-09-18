#include "monty.h"
/**
 * get_line - gets a line from the input file
 * @filename: name of the input filename
 * Return: a string with the line read
*/
void get_line(char *filename)
{
	unsigned int j, i = 1;
	char *clean_line[1000], str[1000], *token;
	stack_t *head = NULL;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	for (i = 1; fgets(str, 1000, fp) != NULL; i++)
	{
		j = 0;
		token = strtok(str, " \n\t\v"), clean_line[j] = token;
		if (token != NULL)
		{
			while ((token = strtok(NULL, " \n\t\v")))
			{
				if (check_digit(token) == 1)
					continue;
				else
				{
					j++;
					clean_line[j] = token;
					break;
				}
			}
			_selector(clean_line, i)(&head, atoi(clean_line[1]));
		}
		else
			continue;
	}
	free_list(head);
	head = NULL;
}
