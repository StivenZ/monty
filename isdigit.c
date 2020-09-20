#include "monty.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: variable that is asigned the value 0 or 1
 * Return: Always 0 or 1.
 */
int _isdigit(char *c)
{
	if ((strlen(c) != 1) || c == NULL)
		return (0);

	if ((((int)*c) >= 48) && (((int)*c) <= 57))
	{
		return (1);
	}
	return (0);
}
