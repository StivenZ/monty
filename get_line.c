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
		// printf("The first token of the %d line is: %s\n", i, clean_line[j]);
		if ((token = strtok(NULL, " \n\t\v")))
		{
			j++;
			clean_line[j] = token;
			// printf("You got in the second strtok and token is: %s\n", token);
			// printf("Final string is: %s\n", *clean_line);
			// printf("%s\n", token);
		}
		else
			continue;
		_selector(clean_line, i)(&head, atoi(clean_line[1]));
	}
	free_list(head);
	head = NULL;
}
