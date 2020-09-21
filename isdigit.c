#include "monty.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: variable that is asigned the value 0 or 1
 * Return: Always 0 or 1.
 */
int _isdigit(char *c)
{
	unsigned int i;

	if ((_strlen(c) < 1) || c == NULL)
		return (0);

	for (i = 0; i < _strlen(c); i++)
	{
		if ((((int)c[i]) >= 48) && (((int)c[i]) <= 57) && c[i] != '\0')
			continue;
		else
			return (0);
	}
	return (1);
}
