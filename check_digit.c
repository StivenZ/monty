#include "monty.h"
/**
 * check_digit - check the code for Holberton School students.
 * @arg: argument passed
 * Return: Always 0.
 */
int check_digit(char *arg)
{
	int i = 0;

	for (i = 0; arg[i] != '\0'; i++)
	{
		if (_isdigit(arg[i]) == 0)
		{
			return (1);
		}
	}
	return (0);
}
