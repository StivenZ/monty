#include "monty.h"
/**
 * get_line - gets a line from the input file
 * @filename: name of the input filename
 * Return: a string with the line read
*/
void get_line(char *filename)
{
	unsigned int j, i = 1;
	char *clean_line[1000], str[1000];
	FILE *fp;
	stack_t **node = NULL;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	for (i = 1; fgets(str, 100, fp) != NULL; i++)
	{
		// printf("%s", str);
		j = 0;
		clean_line[j] = strtok(str, " \n\t\v");

		printf("The first token of the %d line is: %s\n", i, clean_line[j]);
		if (clean_line[j] != NULL)
		{
			j++;
			clean_line[j] = strtok(NULL, " \n\t\v");
			printf("You got in the second strtok and token is: %s\n", clean_line[j]);
			printf("Final string is: %s\n", *clean_line);
		}
		if (clean_line[j] == NULL)
			continue;
		_selector(clean_line, i)(node, i);
	}

	if (!fgets(str, 1000, fp))
	{
		fprintf(stderr, "You reached the end of the file at line %d\n", i - 1);
		fclose(fp);
		exit(EXIT_FAILURE);
	}


	fclose(fp);
}
