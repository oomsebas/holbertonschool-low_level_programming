#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: pointer to the array to serch for
 * @size: the number of elements in the array
 * @value: the numberto find in the array
 * Return: the ndex where the @value is found. ON failure returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t  i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", value, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
