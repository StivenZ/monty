#include "monty.h"
/**
 * main - runs the monty interpreter
 * @argc: arguments number
 * @argv: arguments array
 * Return: EXIT_SUCCESS always
*/
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	get_line(argv[1]);
	fclose(g_st.fp);
	return (0);
}
