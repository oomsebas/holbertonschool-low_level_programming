#include "search_algos.h"

/**
 * print_array -  print the array of the binary search
 * @low: the first item of the array
 * @high: the last item of the array
 * @array: the array to print
 * Return: None
 */
void print_array(int low, int high, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");

	}
	printf("\n");
}

/**
 * leftmost_search - search algorithm for the leftmost item
 * @array: the array to search for
 * @low: low index
 * @high: upeer index
 * @value: searched value
 * Return: the index of the value searched. -1 on failure.
 */
int leftmost_search(int *array, int low, int high, int value)
{
	int mid, res;

	if (low < high)
	{
		print_array(low, high, array);
		mid = (low +  high) / 2;
		if (array[mid] < value)
			res = leftmost_search(array, mid + 1, high, value);
		else
			res = leftmost_search(array, low, mid, value);
		return (res);
	}
	else
	{
		if (low == high && array[low] == value)
		{
			return (low);
		}
		else
		{
			print_array(low, high, array);
			return (-1);
		}
	}
}

/**
 * advanced_binary - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: the index of the value searched. -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0,  high = size - 1, res = 0;

	if (array == NULL)
		return (-1);
	res = leftmost_search(array, low, high, value);
	return (res);
}
