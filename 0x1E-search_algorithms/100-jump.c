#include "search_algos.h"
#include <math.h>


/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: the array to search in.
 * @size: the sixe of the array
 * @value: value to search in array
 * Return: the index of the position of the searched value. -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t  block, jump = 0;
	int ref, step;

	if (array == NULL)
		return (-1);
	block = sqrt(size);
	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}
	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)jump,
		       array[jump]);
		jump += block;
		if (jump == size)
			return (-1);
	}
	ref = array[jump];
	step = jump - block;
	printf("Value found between indexes [%d] and [%d]\n", step, (int)jump);
	for (step = step; step <= (int)jump && step < (int)size; step++)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		if (step < 0 && array[0] == ref)
			return (0);
		else if (array[step] == value)
			return (step);
	}
	return (-1);
}
