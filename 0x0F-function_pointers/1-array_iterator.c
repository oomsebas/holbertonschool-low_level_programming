#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_iterator - function that executes a function given as a parameter
 *on each element of an array.
 *@array: the array to iterate
 *@size: the size of the array
 *@action: the pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	if (size)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
