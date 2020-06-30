#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: a pointer to a pointer
 * @to: a pointer
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
