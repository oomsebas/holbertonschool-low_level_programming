#include "search_algos.h"


/**
 * interpolation_search - function that searches for a value in a sorted array
 * integers using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: the index of the value searched. -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, mid = 0, high = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		if (mid > (int)size)
		{
			printf("Value checked array[%d] is out of range\n",
			       mid);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (value < array[mid])
			high = mid - 1;
		else if (value == array[mid])
			return (mid);
		else if (low == high && value == array[mid])
			return (low);
		else if (low == high && value != array[mid])
			return (-1);
		else if (value > array[mid])
			low = mid + 1;
	}
	return (-1);

}
