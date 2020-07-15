#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - function that print the name according to a recieved function
 *@name: name of the person
 *@f: function to execute and print the name
 *Returns: None
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL)
	{
		name = "(nil)";
	}
		f(name);
}
