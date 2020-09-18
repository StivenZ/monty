#include "monty.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: variable that is asigned the value 0 or 1
 * Return: Always 0 or 1.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
